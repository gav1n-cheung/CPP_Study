#include <iostream>

/* this指针概念
 * C++中成员变量和成员函数是分开存储的
 * 每一个非静态成员函数只会产生一份函数实例，也就是说多个同类型的对象会共用一块代码
 * 那么问题是：这一块代码是如何区分哪个对象调用的呢？
 *
 * C++通过提供特殊的对象指针,this指针,解决上述问题，this指针指向被调用的成员函数所属的对象
 *
 * this指针是隐含每一个非静态成员函数内的一种指针
 * this指针不需要定义，直接使用即可
 *
 * this指针的用途：
 * （1）当形参和成员变量同名时，可用this指针来区分
 * （2）再类的非静态成员函数中返回对象本身，可使用 return *this
 */

class Person {
public:
    Person(int age) {
        //this指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }

    //如果直接返回类型为Person,其实返回的会创建一个新对象，并非p2
    Person& add(Person &p) {
        this->age += p.age;
        return *this;
    }

    int age;
};

//解决名称冲突
void test01() {
    Person p1(18);
    std::cout << "p1的年龄:" << p1.age << std::endl;
}

//返回对象本身用*this
void test02() {
    Person p1(10);
    Person p2(10);
    p2.add(p1).add(p1).add(p1);//链式编程思想
    std::cout << "p2的年龄为：" << p2.age << std::endl;
}

int main() {
//    test01();
    test02();
    return 0;
}
