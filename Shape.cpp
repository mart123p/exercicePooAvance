//
// Created by Martin Pouliot on 2018-10-23.
//

#include "Shape.h"

double Shape::distanceBetweenDot(Point pt1, Point pt2) const {
    return sqrt(pow(pt2.getX() - pt1.getX(),2) + pow(pt2.getY() - pt1.getY(),2));
}

double Shape::getArea() const {
    return 0;
}

double Shape::getPerimeter() const {
    return 0;
}

double Shape::consineLawGetAngle(Point pt1, Point pt2, Point pt3) const {
    double b = distanceBetweenDot(pt1,pt2);
    double a = distanceBetweenDot(pt2,pt3);
    double c = distanceBetweenDot(pt1,pt3);

    //Cosine law
    return acos((pow(c,2)-pow(a,2)-pow(b,2))/(-2*a*b));
}

double Shape::radToDeg(double val) const {
    return val * (180.0/3.141592653589793238463);
}
