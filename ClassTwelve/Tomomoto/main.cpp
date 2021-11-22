#include <iostream>

/* 友元
 * 在程序内，有些私有属性 也想让类外特殊的一些函数或类进行访问，就需要用到友元的技术
 * 友元的目的就是让一个函数或者类 访问另一个类中私有成员
 * 友元的关键字是friend
 * 友元的三种实现
 * （1）全局函数做友元
 * （2）类做友元
 * （3）成员函数做友元
 */

//建筑物类
class Building {
    //将全局函数定义为友元，使其可以访问类内的私有成员
    friend void goodGay(Building &p);
    //类做友元
    friend class goodGayClass;

public:
//    Building() : m_SittingRoom("客厅"), m_BedRoom("卧室") {}
    Building();

public:
    std::string m_SittingRoom;//客厅
private:
    std::string m_BedRoom;//卧室
};

class goodGayClass {
public:
    goodGayClass();

public:
    void visit();//参观函数访问building中的属性

    Building *building;
};

//类外实现成员函数
Building::Building() : m_SittingRoom("客厅"), m_BedRoom("卧室") {}

goodGayClass::goodGayClass() {
    //创建一个建筑物对象
    building = new Building;
}

void goodGayClass::visit() {
    std::cout << "好基友类正在访问：" << building->m_SittingRoom << std::endl;
    std::cout << "好基友类正在访问：" << building->m_BedRoom << std::endl;
}


void goodGay(Building &p) {
    std::cout << "全局函数正在访问:" << p.m_SittingRoom << std::endl;
    std::cout << "全局函数正在访问:" << p.m_BedRoom << std::endl;
}

void test01() {
    Building b;
    goodGay(b);
}

void test02() {
    goodGayClass gay;
    gay.visit();
}

int main() {
//    test01();
    test02();
    return 0;
}
