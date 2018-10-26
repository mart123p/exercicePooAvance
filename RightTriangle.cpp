//
// Created by Martin Pouliot on 2018-10-23.
//

#include <iostream>
#include "RightTriangle.h"

RightTriangle::RightTriangle(Point pt1, Point pt2, Point pt3) : Triangle(pt1, pt2, pt3) {
    //We check if there is at least a 90 angle
    bool hasRightAngle = false;
    for(int i = 0; i < 3; i++){
        double angle = consineLawGetAngle(_points[i],_points[(i+1)%3], _points[(i+2)%3]);
        angle = radToDeg(angle); // We convert to deg
        if (angle > 89 && angle < 91 ){
            hasRightAngle = true;
            _isShapeCorrect = true;
            break;
        }
    }
    if(!hasRightAngle){
        _isShapeCorrect = false;
        throw std::invalid_argument("The triangle is not a right triangle.");
    }
}
