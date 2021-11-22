#include <iostream>

/* C++初始化列表
 * 作用：
 * C++提供了初始化参数列表语法，用于初始化属性
 * 语法：
 * 构造函数():属性1(值1),属性2(值2).....{}
 */

class Person {
public:
/*
    Person(int a,int b,int c){
        m_A=a;
        m_B=b;
        m_C=c;
    }
*/
// :在形参列表和属性赋初值之间
    Person(int a,int b,int c) : m_A(a), m_B(b), m_C(c) {}

    int m_A;
    int m_B;
    int m_C;
};

void test01() {
//    Person p(10, 20, 30);
    Person p(30,20,10);
    std::cout << "m_A = " << p.m_A << std::endl;
    std::cout << "m_B = " << p.m_B << std::endl;
    std::cout << "m_C = " << p.m_C << std::endl;
}

int main() {
    test01();
    return 0;
}
