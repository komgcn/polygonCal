//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_AUX_H
#define POLYGONCAL_AUX_H

#include "Point.h"
#include <cmath>

namespace Aux{

    static float distance(Point a, Point b){
        return  std::sqrt(std::pow(a.x - b.x,2) + std::pow(a.y-b.y,2));
    }

    static float crossMultiply(Point a, Point b){
            return a.x * b.y - b.x * a.y;
    }
}

#endif //POLYGONCAL_AUX_H
