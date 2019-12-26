//
// Created by zhihui on 12/23/19.
//

#include "TriCal.h"
#include "Point.h"
#include <vector>
#include <cmath>
#include <stdexcept>

float TriCal::calculateArea(const std::vector<Point> &points) const {
    if (points.size() != 3)
        throw std::runtime_error("A triangle must have 3 points!");

    return (std::fabs(points[0].x*(points[1].y-points[2].y)
                      +points[1].x*(points[2].y-points[0].y)
                      + points[2].x*(points[0].y-points[1].y))) * 0.5f;
}
