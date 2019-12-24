//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_TRICAL_H
#define POLYGONCAL_TRICAL_H

#include "ShapeCal.h"
#include <stdexcept>

class TriCal : public ShapeCal {

public:

    explicit TriCal(const std::vector<Point> &points):ShapeCal(verify(points)){}

    virtual float area() const;

private:
    const std::vector<Point>& verify(const std::vector<Point> &points) const{
        if(points.size() != 3)
            throw std::runtime_error("Triangle must have 3 points!");
        return points;
    }
};


#endif //POLYGONCAL_TRICAL_H
