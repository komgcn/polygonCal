//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_POLYGONCAL_H
#define POLYGONCAL_POLYGONCAL_H

#include "ShapeCal.h"

class PolygonCal : public ShapeCal{

public:

    /*polygon points are assumed in clockwise or anti-clockwise order*/
    explicit PolygonCal() = default;

    float calculateArea(const std::vector<Point>&) const override;

    ~PolygonCal() override = default;
};


#endif //POLYGONCAL_POLYGONCAL_H
