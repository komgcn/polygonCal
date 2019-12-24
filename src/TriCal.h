//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_TRICAL_H
#define POLYGONCAL_TRICAL_H

#include "ShapeCal.h"

class TriCal : public ShapeCal {

public:

    TriCal(std::vector<Point> &points):ShapeCal(points){}

    virtual float area() const;
};


#endif //POLYGONCAL_TRICAL_H
