//
// Created by zhihui on 12/23/19.
//

#include "TriCal.h"
#include <cmath>

float TriCal::area() const {
    Point a = vertexes[0];
    Point b = vertexes[1];
    Point c = vertexes[2];

    return (std::fabs(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))) * 0.5;
}
