#include <iostream>

/* 多继承语法
 * C++允许一个类继承多个类
 * 语法: class 子类:继承方式 父类1, 继承方式 父类2,...
 *
 * 多继承可能会引起父类中有同名函数出现，需要加作用域加以区分
 * C++实际开发中不建议使用多继承
 */

class Base1 {
public:
    Base1() : m_A(100) {}

    int m_A;
};

class Base2 {
public:
    Base2() : m_A(200) {}

    int m_A;
};

//子类 需要继承Base1和Base2
class Son : public Base1, public Base2 {
public:
    Son() : m_C(300), m_D(400) {}

    int m_C;
    int m_D;
};

void test01() {
    Son s;
    std::cout << "sizeof s = " << sizeof(s) << std::endl;
    //当父类中出现了同名的成员，访问不同的父类中的成员需要作用域
    std::cout << "base1 m_A = " << s.Base1::m_A << std::endl;
    std::cout << "base2 m_A = " << s.Base2::m_A << std::endl;
}

int main() {
    test01();
    return 0;
}
