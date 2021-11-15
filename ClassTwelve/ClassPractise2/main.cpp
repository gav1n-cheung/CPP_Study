#include <iostream>
/* 练习案例：
 * 设计立方体类
 * 求出立方体的面积和体积
 * 分别用全局函数和成员函数判断两个立方体是否相等
 */

//立方体结构体
struct Cube_struct {
    int m_H;
    int m_L;
    int m_W;
};

//全局函数
int cubeVolume(int m_H, int m_L, int m_W);//计算立方体体积的全局函数
int cubeArea(int m_H, int m_L, int m_W);//计算立方体面积的全局函数


//使用类来构造立方体
class Cube_class {
private:
    int m_W;
    int m_H;
    int m_L;
    int volume;
    int area;
public:
    void setCubeAug(int w, int l, int h) {
        m_W = w;
        m_L = l;
        m_H = h;
    }

    int calculateVolume() {
        return m_H * m_W * m_L;
    }

    int calculateArea() {
        return (m_W * m_H) * 2 + (m_H * m_L) * 2 + (m_L * m_W) * 2;
    }

    void equalOrNot(Cube_class &c1) {
        if ((c1.calculateVolume() == this->calculateVolume()) && (c1.calculateArea() == this->calculateArea())) {
            std::cout << "两个立方体相等" << std::endl;
        } else {
            std::cout << "两个立方体不等" << std::endl;
        }

    }

};

//全局变量来判断立方体是否相等，尽量使用引用的方式来使用形参，避免重新开辟大量内存空间
void DetermineWhetherTheyAreEqual(Cube_class &c1, Cube_class &c2) {
    if ((c1.calculateArea() == c2.calculateArea()) && (c1.calculateVolume() == c2.calculateVolume())) {
        std::cout << "两个立方体相等" << std::endl;
    } else {
        std::cout << "两个立方体不等" << std::endl;
    }
}

int main() {
    Cube_struct cube1;
    cube1.m_W = 10;
    cube1.m_H = 20;
    cube1.m_L = 30;
    std::cout << "使用全局函数计算的立方体体积为：" << cubeVolume(cube1.m_H, cube1.m_L, cube1.m_W) << std::endl;
    std::cout << "使用全局函数计算的立方体面积为：" << cubeArea(cube1.m_H, cube1.m_L, cube1.m_W) << std::endl;

    Cube_class cube2;
    cube2.setCubeAug(10, 10, 30);
    std::cout << "使用成员函数计算的立方体体积为：" << cube2.calculateVolume() << std::endl;
    std::cout << "使用成员函数计算的立方体面积为：" << cube2.calculateArea() << std::endl;

    Cube_class cube3;
    cube3.setCubeAug(10, 10, 30);
    std::cout << "使用成员函数计算的立方体体积为：" << cube3.calculateVolume() << std::endl;
    std::cout << "使用成员函数计算的立方体面积为：" << cube3.calculateArea() << std::endl;
    DetermineWhetherTheyAreEqual(cube2, cube3);
    cube3.equalOrNot(cube2);

    return 0;
}

//计算立方体体积的全局函数
int cubeVolume(int m_H, int m_L, int m_W) {
    return m_H * m_L * m_W;
}

//计算立方体面积的全局函数
int cubeArea(int m_H, int m_L, int m_W) {
    int area = (m_W * m_H) * 2 + (m_H * m_L) * 2 + (m_L * m_W) * 2;
    return area;
}

