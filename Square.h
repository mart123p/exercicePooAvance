//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_SQUARE_H
#define EXAMPLEPOO_SQUARE_H


#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(Point pt1, Point pt2, Point pt3, Point pt4);
    double getArea() const override;
};


#endif //EXAMPLEPOO_SQUARE_H
