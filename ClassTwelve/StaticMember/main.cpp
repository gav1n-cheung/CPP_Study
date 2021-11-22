#include <iostream>
/* 静态成员
 * 静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
 * 静态成员分为：
 *  （1）静态成员变量
 *      1）所有对象共享一份数据
 *      2）在编译阶段分配内存
 *      3）类内声明，类外初始化
 *  （2）静态成员函数
 *      1）所有对象共享同一个函数
 *      2）静态成员函数只能访问静态成员变量
 */

class Person{
public:
    //静态成员函数
    static void func(){
        m_A=100;
//        m_B=200;//静态成员函数不可以访问非静态成员变量，无法区分是哪个对象的m_B
        std::cout<<"static void func 调用"<<std::endl;
    }
    static int m_A;//静态成员变量
    int m_B;//非静态成员变量

    //静态成员也是有访问权限的
private:
    static void func2(){
        std::cout<<"static void func2 调用"<<std::endl;
    }
};

int Person::m_A=10;//所有函数共享一份

void test01(){
    //1、通过对象进行访问
    Person p;
    p.func();
    //2、通过类名进行访问
    Person::func();
//    Person::func2();//类外访问不到私有静态成员函数
}

int main() {
    test01();
    return 0;
}
