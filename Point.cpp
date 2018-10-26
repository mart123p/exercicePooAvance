//
// Created by Martin Pouliot on 2018-10-23.
//

#include "Point.h"

Point::Point(double x, double y): _x(x),_y(y) {

}

double Point::getX() const {
    return _x;
}

double Point::getY() const {
    return _y;
}
