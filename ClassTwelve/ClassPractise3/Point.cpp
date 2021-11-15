//
// Created by cheung on 11/15/21.
//
#include "Point.h"

void Point::setCoordinate(const int &x, const int &y) {
    p_coordinate[0] = x;
    p_coordinate[1] = y;
}

int Point::returnCoordinateX() {
    return p_coordinate[0];
}

int Point::returnCoordinateY() {
    return p_coordinate[1];
}