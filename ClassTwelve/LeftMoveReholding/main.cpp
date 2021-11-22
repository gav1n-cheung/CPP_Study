#include <iostream>

/* 左移运算符重载
 * <<运算符的重载可以实现各种数据类型的输出
 */

class Person {
    friend std::ostream &operator<<(std::ostream &cout, Person p);

public:
    Person();

private:
    int m_A;
    int m_B;

    //利用成员函数来重载左移运算符,通常不会利用成员函数来重载<<运算符，因为无法实现cout在左侧
/*    void operator<<(Person &p){

    }*/
};

Person::Person() : m_A(10), m_B(10) {}

//本质 operator<<(cout,p) 简化 cout<<p
std::ostream &operator<<(std::ostream &cout, Person p) {
    cout << p.m_A << "\t" << p.m_B;
    return cout;
}

void test01() {
    Person p;
    std::cout << p << std::endl;
}

int main() {
    test01();
    return 0;
}
