//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_RECTANGLE_H
#define EXAMPLEPOO_RECTANGLE_H


#include "Quadrilateral.h"

class Rectangle: public Quadrilateral {
public:
    explicit Rectangle(Point pt1, Point pt2, Point pt3, Point pt4);
    double getArea() const override;
};


#endif //EXAMPLEPOO_RECTANGLE_H
