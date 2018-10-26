//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_SHAPE_H
#define EXAMPLEPOO_SHAPE_H


#include "Point.h"
#include <cmath>

class Shape {
public:
    virtual double getPerimeter() const;
    virtual double getArea() const;
protected:
    double distanceBetweenDot(Point pt1, Point pt2) const;
    double consineLawGetAngle(Point pt1 ,Point pt2, Point pt3) const;
    double radToDeg(double val) const;
    bool _isShapeCorrect;
};


#endif //EXAMPLEPOO_SHAPE_H
