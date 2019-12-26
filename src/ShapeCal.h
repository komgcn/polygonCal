//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_SHAPECAL_H
#define POLYGONCAL_SHAPECAL_H

#include <vector>
#include "Point.h"

class ShapeCal {

public:

    explicit ShapeCal() = default;

    virtual ~ShapeCal() = default;

    virtual float calculateArea(const std::vector<Point>&) const = 0;

};


#endif //POLYGONCAL_SHAPECAL_H
