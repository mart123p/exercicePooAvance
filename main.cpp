#include <iostream>
#include "Quadrilateral.h"
#include "Triangle.h"
#include "RightTriangle.h"

int main() {
    Point pt1(1,2);
    Point pt2(2,4);
    Point pt3(3,0);
    Point pt4(0,0);
    Quadrilateral quadrilateral(pt1,pt2,pt3,pt4);
    std::cout << "Perimeter " << quadrilateral.getPerimeter() << std::endl;

    //Area simple square
    Quadrilateral quadrilateral3(Point(0,0),Point(0,2),Point(2,2),Point(2,0));
    std::cout << "Area " << quadrilateral3.getArea() << std::endl;
    std::cout << "Perimeter " << quadrilateral3.getPerimeter() << std::endl;

    //try {
        RightTriangle rightTriangle(Point(0.5, 0), Point(1, 0), Point(0, 1));
        std::cout << rightTriangle.getArea() << std::endl;
    //}catch(std::invalid_argument &e){
    //    std::cout << e.what();
    //}

    return 0;
}