#include <iostream>
/* 运算符重载
 * 运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
 */

/* 加号运算符重载
 * 作用：实现两个自定义数据类型相加的运算
 * 对于内置的数据类型，编译器知道如何进行运算
 *
 * 对于内置的数据类型的表达式的运算符是不可能改变的
 * 不要滥用运算符重载
 */

class Person {
public:
    int m_A;
    int m_B;

//1、成员函数重载+号
    Person operator+(Person &p1) {
        Person temp;
        temp.m_A = this->m_A + p1.m_A;
        temp.m_B = this->m_B + p1.m_B;
        return temp;
    }
    Person operator+(int a){
        Person temp;
        temp.m_A= this->m_A+a;
        temp.m_B= this->m_B+a;
        return temp;

    }
};

/*void test01() {
    Person p1;
    Person p2;
    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;

    Person p3 = p1 + p2;
    //成员函数的本质调用
    Person p3=p1.operator+(p2);
    std::cout << "p3.m_A = " << p3.m_A << std::endl;
    std::cout << "p3.m_B = " << p3.m_B << std::endl;
}*/


//2、全局函数重载+号
/*Person operator+(Person &p1, Person &p2) {
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}*/

void test02() {
    Person p1;
    Person p2;
    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;
    //全局函数重载的本质
    //Person p3=operator+(p1,p2);
    Person p3 = p1 + p2;
    //运算符重载也可以发生函数重载
    Person p4=p3+10;
    std::cout << "p3.m_A = " << p3.m_A << std::endl;
    std::cout << "p3.m_B = " << p3.m_B << std::endl;
    std::cout << "p4.m_A = " << p4.m_A << std::endl;
    std::cout << "p4.m_B = " << p4.m_B << std::endl;

}

int main() {
//    test01();
    test02();
    return 0;
}
