//
// Created by cheung on 11/15/21.
//

#include "Circle.h"

void Circle::setCenter(const int &x, const int &y) {
    center.setCoordinate(x, y);
}

void Circle::setR(const int &r) {
    c_r = r;
}

int Circle::locationJudgment(Point &p) {
    double distance = sqrt(
            pow(p.returnCoordinateX() - center.returnCoordinateX(), 2) +
            pow(p.returnCoordinateY() - center.returnCoordinateY(), 2));
    if (distance < c_r) {
        std::cout << "点在圆内" << std::endl;
        return 1;
    } else if (distance == c_r) {
        std::cout << "点在圆上" << std::endl;
        return 0;
    } else {
        std::cout << "点在圆外" << std::endl;
        return -1;
    }
}

