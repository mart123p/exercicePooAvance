//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_QUADRILATERAL_H
#define EXAMPLEPOO_QUADRILATERAL_H
#include "Shape.h"
#include "Point.h"

class Quadrilateral: public Shape {
public:
public:
    explicit Quadrilateral(Point pt1, Point pt2, Point pt3, Point pt4);
    double getPerimeter() const override;
    double getArea() const override;
protected:
    Point _points[4] = {Point(0,0),Point(0,0),Point(0,0),Point(0,0)};
};


#endif //EXAMPLEPOO_QUADRILATERAL_H
