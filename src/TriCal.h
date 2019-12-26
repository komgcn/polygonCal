//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_TRICAL_H
#define POLYGONCAL_TRICAL_H

#include "ShapeCal.h"

class TriCal : public ShapeCal {

public:

    explicit TriCal() = default;

    float calculateArea(const std::vector<Point>&) const override;
};

#endif //POLYGONCAL_TRICAL_H
