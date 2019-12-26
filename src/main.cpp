#include <iostream>
#include "Point.h"
#include "ShapeCal.h"
#include "TriCal.h"
#include "SquareCal.h"
#include "PolygonCal.h"
#include "../include/basicPtr.h"
#include <stdexcept>

using namespace std;

int main() {

    //example
    std::vector<Point> triVec{Point(0,0), Point(5,4), Point(7.0f,-8.4f)};
    std::vector<Point> squareVec{Point(7,26), Point(29,26), Point(29,4), Point(7,4)};
    std::vector<Point> polyVec{Point(9.72f,24.023f),Point(27,24),Point(27,6), Point(13,-20), Point(-3,-13)};

    basicPtr<ShapeCal> triangle(new TriCal());
    basicPtr<ShapeCal> square(new SquareCal());
    basicPtr<ShapeCal> polygon(new PolygonCal());

    try{

        cout << triangle.get().calculateArea(triVec) << endl; //test basicPtr.get() and TriCal.calculateArea()

        cout << (*square).calculateArea(squareVec)<< endl; //test basicPtr *() overload and SquareCal.calculateArea()

        cout << polygon->calculateArea(polyVec) << endl; //test basicPtr ->() overload and PolygonCal.calculateArea()

    }catch(const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}