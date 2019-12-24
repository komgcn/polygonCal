//
// Created by zhihui on 12/23/19.
//

#include "PolygonCal.h"
#include "Aux.h"
#include <cmath>
#include <stdexcept>

float PolygonCal::area() const {

    if (vertexes.size() < 3)
        return 0.0;

    float total_area = 0.0;

    std::size_t i;
    for(i = 0;i < vertexes.size(); ++i)
    {
        total_area += Aux::crossMultiply(vertexes[i],vertexes[i+1]);
    }
    total_area += Aux::crossMultiply(vertexes.back(),vertexes.front());
    total_area = std::fabs(total_area);

    return total_area * 0.5f;
}

