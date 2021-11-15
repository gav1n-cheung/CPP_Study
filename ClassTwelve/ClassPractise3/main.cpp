#include <iostream>
#include "Point.h"
#include "Circle.h"

/* 点和圆的关系
 * 设计一个圆形类(circle)和一个点类(point)，计算点和圆的关系
 */

int main() {
    Point point1;
    point1.setCoordinate(-3, 0);
    Circle circle1;
    circle1.setCenter(0, 0);
    circle1.setR(3);
    int result = circle1.locationJudgment(point1);
    if (result == 1) {
        std::cout << "点在圆内" << std::endl;
    } else if (result == 0) {
        std::cout << "点在圆上" << std::endl;
    } else {
        std::cout << "点在圆外" << std::endl;
    }
    return 0;
}
