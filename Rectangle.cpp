//
// Created by Martin Pouliot on 2018-10-23.
//

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(Point pt1, Point pt2, Point pt3, Point pt4) : Quadrilateral(pt1, pt2, pt3, pt4) {
    for(int i = 0; i < 4; i++){
        double angle = consineLawGetAngle(_points[i],_points[(i+1)%4], _points[(i+2)%4]);
        angle = radToDeg(angle); // We convert to deg
        if (angle <= 89 || angle >= 91 ){
            _isShapeCorrect = false;
            throw std::invalid_argument("This shape is not a rectangle.");
        }
    }
    _isShapeCorrect = true;
}

double Rectangle::getArea() const {
    //We use another formula because it's more efficent to do a base * height
    double base = distanceBetweenDot(_points[0],_points[1]);
    double height = distanceBetweenDot(_points[1],_points[2]);

    return base * height;
}
