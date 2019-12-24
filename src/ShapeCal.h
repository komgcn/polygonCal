//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_SHAPECAL_H
#define POLYGONCAL_SHAPECAL_H

#include "Point.h"
#include <vector>

class ShapeCal {

public:

    ShapeCal(std::vector<Point> &points):vertexes(points){}  //

    virtual float area() const = 0;

protected:
    std::vector<Point> vertexes;
};


#endif //POLYGONCAL_SHAPECAL_H
