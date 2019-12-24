#include <iostream>
#include "Point.h"
#include "ShapeCal.h"
#include "Aux.h"

int main() {

    std::vector<Point> polyVec{Point(9,24),Point(27,24),Point(27,6),Point(9,6)};

    ShapeCal *shapeCal;

    std::cout <<"Area: "<<shapeCal->area()<<std::endl;

    return 0;
}