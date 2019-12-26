//
// Created by zhihui on 12/23/19.
//

#include "PolygonCal.h"
#include "Aux.h"
#include "Point.h"
#include <vector>
#include <cmath>
#include <stdexcept>

float PolygonCal::calculateArea(const std::vector<Point> &points) const {
    if(points.size() < 3)
        throw std::runtime_error("A polygon must have at least 3 points!");

    float total_area = 0.0f;

    for(std::size_t i = 0;i < points.size()-1; ++i)
    {
        total_area += Aux::crossMultiply(points[i],points[i+1]);
    }
    total_area += Aux::crossMultiply(points.back(),points.front());

    return std::fabs(total_area) * 0.5f;
}

