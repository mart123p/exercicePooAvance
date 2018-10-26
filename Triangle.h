//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_TRIANGLE_H
#define EXAMPLEPOO_TRIANGLE_H


#include "Shape.h"

class Triangle: public Shape {
public:
    Triangle(Point pt1, Point pt2, Point pt3);
    double getPerimeter() const override;
    double getArea() const override;
protected:
    Point _points[3] = {Point(0,0),Point(0,0),Point(0,0)};
};


#endif //EXAMPLEPOO_TRIANGLE_H
