//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_POLYGONCAL_H
#define POLYGONCAL_POLYGONCAL_H

#include "ShapeCal.h"

class PolygonCal : public ShapeCal{

public:

    /*polygon points are assumed in clockwise or anti-clockwise order*/
    PolygonCal(std::vector<Point> &points):ShapeCal(points){}

    virtual float area() const;
};


#endif //POLYGONCAL_POLYGONCAL_H
