//
// Created by Martin Pouliot on 2018-10-23.
//

#include "Square.h"
#include <iostream>

Square::Square(Point pt1, Point pt2, Point pt3, Point pt4) : Rectangle(pt1, pt2, pt3, pt4) {
    double length = 0;
    for(int i = 0; i < 4; i++){
        double edge = distanceBetweenDot(_points[i],_points[(i+1)%4]);

        if(i == 0)
            length = edge;

        if(length != edge){
            _isShapeCorrect = false;
            throw std::invalid_argument("The points do not represent a square. All the edges must be the same lenght.");
        }
    }
}

double Square::getArea() const {
    //We redefine getArea to because we only need to calculate one edge therefore it's faster than
    //having to calculate two different edges.
    double edge = distanceBetweenDot(_points[0],_points[1]);
    return edge*edge;
}
