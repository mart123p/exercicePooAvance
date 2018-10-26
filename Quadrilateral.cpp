//
// Created by Martin Pouliot on 2018-10-23.
//

#include <iostream>
#include "Quadrilateral.h"
Quadrilateral::Quadrilateral(Point pt1, Point pt2, Point pt3, Point pt4){
    _points[0] = pt1;
    _points[1] = pt2;
    _points[2] = pt3;
    _points[3] = pt4;

    //We check if all the internal angle of the shape are 360. If they aren't this
    //is not a quadrilateral
    double angleTotal = 0;
    for(int i = 0; i < 4; i++){
        angleTotal += consineLawGetAngle(_points[i],_points[(i+1)%4], _points[(i+2)%4]);
    }

    //We convert rad to degrees
    angleTotal = radToDeg(angleTotal);

    //We allow an error margin to make sure we don't do any false positives.
    if(angleTotal < 358 || angleTotal > 362){
        _isShapeCorrect = false;
        //We can also throw exeception which should be the correct way
        throw std::invalid_argument("The Quadrilateral is not a convex one.");
    }
    _isShapeCorrect = true;
}

double Quadrilateral::getPerimeter() const {
    if(_isShapeCorrect) {
        double perimeter = 0;
        for (int i = 0; i < 4; i++) {
            perimeter += distanceBetweenDot(_points[i], _points[(i + 1) % 4]);
        }
        return perimeter;

    }else{
        return 0;
    }
}

double Quadrilateral::getArea() const {
    if(_isShapeCorrect){
        //We use the cos law to get a few angles we need for bretschneider's formula
        double theta1 = consineLawGetAngle(_points[0],_points[1],_points[2]);
        double theta2 = consineLawGetAngle(_points[2],_points[3],_points[0]);

        double a = distanceBetweenDot(_points[0],_points[1]);
        double b = distanceBetweenDot(_points[1],_points[2]);
        double c = distanceBetweenDot(_points[2],_points[3]);
        double d = distanceBetweenDot(_points[3],_points[0]);

        double theta = theta1 + theta2;

        double s = (a + b + c + d)/2;

        //bretschneider's formula
        double area = sqrt(((s-a)*(s-b)*(s-c)*(s-d))-(a*b*c*d*pow(cos(theta/2),2)));
        return area;
    }else{
        return 0;
    }
}
