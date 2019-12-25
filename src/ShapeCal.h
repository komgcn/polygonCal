//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_SHAPECAL_H
#define POLYGONCAL_SHAPECAL_H

#include <vector>
#include "Point.h"

class ShapeCal {

public:

    explicit ShapeCal(std::vector<Point> points):vertexes(std::move(points)){}

    virtual ~ShapeCal() = default;

    virtual float area() const = 0;

protected:
    std::vector<Point> vertexes;
};


#endif //POLYGONCAL_SHAPECAL_H
