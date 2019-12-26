//
// Created by zhihui on 12/23/19.
//

#include "SquareCal.h"
#include <cmath>
#include <vector>
#include <stdexcept>
#include "Aux.h"
#include "Point.h"

float SquareCal::calculateArea(const std::vector<Point> &points) const {
    if (points.size() != 4)
        throw std::runtime_error("A square must have 4 points!");

    return std::pow(Aux::distance(points[0],points[1]),2.0f);
}