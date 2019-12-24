//
// Created by zhihui on 12/23/19.
//

#ifndef POLYGONCAL_POINT_H
#define POLYGONCAL_POINT_H


struct Point {
    float x,y;
    Point():x(0.0),y(0.0){}
    Point(float _x, float _y):x(_x),y(_y){}
    Point(int _x,int _y):x(static_cast<float>(_x)),y(static_cast<float>(_y)){}
};


#endif //POLYGONCAL_POINT_H
