#include <iostream>

class GoodGay;

class Building;

class GoodGay {
public:
    GoodGay();

    void visit();//visit可以访问building中的私有成员
    void visit2();//visit2不可以访问building中的私有成员

    Building *building;
};

class Building {
    friend void GoodGay::visit();

public:
    Building();

public:
    std::string m_SittingRoom;
private:
    std::string m_BedRoom;
};

Building::Building() : m_SittingRoom("客厅"), m_BedRoom("卧室") {}


GoodGay::GoodGay() { building = new Building; }

void GoodGay::visit() {
    std::cout << "visit 函数正在访问：" << building->m_SittingRoom << std::endl;
    std::cout << "visit 函数正在访问：" << building->m_BedRoom << std::endl;
}

void GoodGay::visit2() { std::cout << "visit2 函数正在访问：" << building->m_SittingRoom << std::endl; }

void test01() {
    GoodGay p;
    p.visit();
    p.visit2();
}

int main() {
    test01();
    return 0;
}
