//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_POLYGONCAL_H
#define POLYGONCAL_POLYGONCAL_H

#include "ShapeCal.h"
#include <stdexcept>

class PolygonCal : public ShapeCal{

public:

    /*polygon points are assumed in clockwise or anti-clockwise order*/
    explicit PolygonCal(std::vector<Point> &points):ShapeCal(verify(points)){}

    float area() const override;

private:
    const std::vector<Point>& verify(const std::vector<Point> &points) const {
        if(points.size() < 3)
            throw std::runtime_error("Polygon must have at least 3 points!");
        return points;
    }
};


#endif //POLYGONCAL_POLYGONCAL_H
