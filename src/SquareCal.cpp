//
// Created by zhihui on 12/23/19.
//

#include "SquareCal.h"
#include <cmath>
#include "Aux.h"
#include <stdexcept>

using namespace std;

float SquareCal::area() const {

    return pow(Aux::distance(vertexes[0],vertexes[1]),2.0f);
}
