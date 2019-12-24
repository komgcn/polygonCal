#include <iostream>
#include "Point.h"
#include "ShapeCal.h"
#include "TriCal.h"
#include "SquareCal.h"
#include "PolygonCal.h"
#include "../include/basicPtr.h"
#include <stdexcept>

int main() {

    std::vector<Point> triVec{Point(0,0), Point(5,4), Point(7.0f,-8.4f)};
    std::vector<Point> squareVec{Point(7,26), Point(29,26), Point(29,4), Point(7,4)};
    std::vector<Point> polyVec{Point(9.72f,24.023f),Point(27,24),Point(27,6), Point(13,-20), Point(-3,-13)};

    try{

        basicPtr<ShapeCal> triPtr(new TriCal(triVec));
        basicPtr<ShapeCal> squarePtr(new SquareCal(squareVec));
        basicPtr<ShapeCal> polyPtr(new PolygonCal(polyVec));


        std::cout << "Triangle area: " << (*triPtr).area() << std::endl;
        std::cout << "Square area: " << (*squarePtr).area() << std::endl;
        std::cout << "Polygon area: " << (*polyPtr).area() << std::endl;

    }catch(const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}