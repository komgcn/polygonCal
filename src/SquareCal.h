//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_SQUARECAL_H
#define POLYGONCAL_SQUARECAL_H

#include "ShapeCal.h"
#include <stdexcept>

class SquareCal :public ShapeCal{

public:
    /*points are assumed to be adjacent in order*/
    explicit SquareCal(const std::vector<Point> &points):ShapeCal(verify(points)){}

    virtual float area() const;

private:
    const std::vector<Point> &verify(const std::vector<Point> &points) const {
        if(points.size() != 4)
            throw std::runtime_error("Square must have 4 points!");;
        return points;
    }
};


#endif //POLYGONCAL_SQUARECAL_H
