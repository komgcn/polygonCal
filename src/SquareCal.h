//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_SQUARECAL_H
#define POLYGONCAL_SQUARECAL_H

#include "ShapeCal.h"

class SquareCal :public ShapeCal{

public:
    /*points are assumed to be adjacent in order*/
    explicit SquareCal() = default;

    float calculateArea(const std::vector<Point> &) const override;
};


#endif //POLYGONCAL_SQUARECAL_H
