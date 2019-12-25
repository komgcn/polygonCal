//
// Created by zhihui on 12/23/19.
//

#include "SquareCal.h"
#include <cmath>
#include "Aux.h"

float SquareCal::area() const {

    return std::pow(Aux::distance(vertexes[0],vertexes[1]),2.0f);
}
