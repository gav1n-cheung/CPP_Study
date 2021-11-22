#include <iostream>

/* 关系运算符重载
 * 作用：重载关系运算符，可以让两个自定义类型对象进行比较操作
 */

class Person {
public:

    int m_age;
    std::string name;
    Person(std::string name,int age){
        this->name=name;
        m_age=age;
    }

    bool operator>(Person &p) {
        if (m_age > p.m_age) {
            return true;
        } else {
            return false;
        }
    }
    bool operator==(Person &p) {
        if (m_age == p.m_age&&this->name==p.name) {
            return true;
        } else {
            return false;
        }
    }
};

void test01() {
    Person p("tom",19);
    Person p1("tom",18);
    if (p == p1 ) {
        std::cout << "相等！"<< std::endl;
    } else{
        std::cout<<"不相登"<<std::endl;
    }
}


int main() {
    test01();
    return 0;
}
