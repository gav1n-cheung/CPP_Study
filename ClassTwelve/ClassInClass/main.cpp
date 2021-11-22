#include <iostream>

/* 类对象作为类的成员
 * C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
 * 例如：
 * class A{}
 * class B{
 *      A a;
 * }
 * B类中有对象A作为成员，A为对象成员
 * 当其他类对象作为本类成员，构造时候先构造类对象，再构造自身；先析构自身，再析构类对像；与构造顺序相反
 */

class Phone {
public:
    Phone(std::string pName) {
        m_PName = pName;
        std::cout << "Phone构造函数" << std::endl;
    }
    ~Phone(){
        std::cout << "Phone析构函数" << std::endl;
    }

    std::string m_PName;
};

class Person {
public:
    Person(std::string name, std::string pName) : m_Name(name), m_Phone(pName) {
        std::cout << "Person构造函数" << std::endl;
    }
    ~Person(){
        std::cout << "Person析构函数" << std::endl;
    }
    std::string m_Name;
    Phone m_Phone;
};

void test01() {
    Person p("张三", "iphone");
    std::cout << "姓名 ： " << p.m_Name << "\t手机 ： " << p.m_Phone.m_PName << std::endl;
}

int main() {
    test01();
    return 0;
}
