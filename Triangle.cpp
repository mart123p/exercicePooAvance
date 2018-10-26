//
// Created by Martin Pouliot on 2018-10-23.
//

#include <iostream>
#include "Triangle.h"

Triangle::Triangle(Point pt1, Point pt2, Point pt3) {
    //The internal sum of all the angles must be 180
    _points[0] = pt1;
    _points[1] = pt2;
    _points[2] = pt3;

    //We check if all the internal angle of the shape are 180. If they aren't this
    //is not a triangle
    double angleTotal = 0;
    for(int i = 0; i < 3; i++){
        angleTotal += consineLawGetAngle(_points[i],_points[(i+1)%3], _points[(i+2)%3]);
    }

    //We convert rad to degrees
    angleTotal = radToDeg(angleTotal);

    //We allow an error margin to make sure we don't do any false positives.
    if(angleTotal < 178 || angleTotal > 182){
        _isShapeCorrect = false;
        //We can also throw exeception which should be the correct way
        throw std::invalid_argument("The points are not a triangle");
    }
    _isShapeCorrect = true;
}

double Triangle::getPerimeter() const {
    if(_isShapeCorrect) {
        double perimeter = 0;
        for (int i = 0; i < 3; i++) {
            perimeter += distanceBetweenDot(_points[i], _points[(i + 1) % 3]);
        }
        return perimeter;

    }else{
        return 0;
    }
}

double Triangle::getArea() const {
    if(_isShapeCorrect) {
        double a = distanceBetweenDot(_points[0], _points[1]);
        double b = distanceBetweenDot(_points[1], _points[2]);
        double c = distanceBetweenDot(_points[2], _points[0]);

        double s = (a + b + c) / 2;

        return sqrt(s * (s - a) * (s - b) * (s - c));
    }else{
        return 0;
    }
}
