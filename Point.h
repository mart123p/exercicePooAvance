//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_POINT_H
#define EXAMPLEPOO_POINT_H


class Point {
public:
    Point(double x, double y);
    double getX() const;
    double getY() const;
private:
    double _x;
    double _y;
};


#endif //EXAMPLEPOO_POINT_H
