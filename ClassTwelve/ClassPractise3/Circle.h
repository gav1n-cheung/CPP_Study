//
// Created by cheung on 11/15/21.
//
#include <iostream>
#include <math.h>
#include "Point.h"

#ifndef CLASSPRACTISE3_CIRCLE_H
#define CLASSPRACTISE3_CIRCLE_H


class Circle {
private:
    //在一个类中，可以让另一个类作为本类中的成员
    Point center;
    double c_r;
public:
    void setCenter(const int &x, const int &y);

    void setR(const int &r);

    int locationJudgment(Point &p);

};


#endif //CLASSPRACTISE3_CIRCLE_H
