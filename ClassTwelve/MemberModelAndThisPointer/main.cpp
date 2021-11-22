#include <iostream>

/* C++对象模型和this指针
 * 对象变量和成员函数分开存储
 * 在C++中，类内的成员变量和成员函数分开存储
 * 只有非静态成员才属于类的对象上
 */

class Person {
    //int m_A;//非静态成员变量  属于类的对象上
    static int m_B;//静态的成员变量不属于类对象上，不占用对象的空间
    //非静态成员函数
    void func(){}//同样不属于类对象上
    static void func2(){}//静态成员函数 不属于类的对象上
};

int Person::m_B=0;

void test01() {
    Person p;
    //空对象占用内存空间为1
    //C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象也应该有一个独一无二的内存地址
    std::cout << "size of p = " << sizeof(p) << std::endl;
}

void test02(){

}

int main() {

    test01();
    return 0;
}
