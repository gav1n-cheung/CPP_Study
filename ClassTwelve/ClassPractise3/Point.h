//
// Created by cheung on 11/15/21.
//
#include <iostream>

#ifndef CLASSPRACTISE3_POINT_H
#define CLASSPRACTISE3_POINT_H


class Point {
private:
    int p_coordinate[2];
public:
    void setCoordinate(const int &x, const int &y);

    int returnCoordinateX();

    int returnCoordinateY();
};


#endif //CLASSPRACTISE3_POINT_H
