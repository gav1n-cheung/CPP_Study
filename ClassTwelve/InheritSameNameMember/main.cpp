#include <iostream>

/* 当子类和父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢
 * （1）访问子类同名成员，直接访问即可
 * （2）访问父类同名成员，需要加作用域
 */

class Base {
public:
    Base() : m_A(100) {}
    void func(){
        std::cout<<"父类的成员函数"<<std::endl;
    }
    void func(int a){
        std::cout<<"父类的有参成员函数"<<std::endl;
    }
    int m_A;
};

class Son : public Base {
public:
    Son() : m_A(200) {}
    void func(){
        std::cout<<"子类的成员函数"<<std::endl;
    }

    int m_A;
};
//同名成员属性
void test01() {
    Son s1;
    std::cout << "s1.m_A = " << s1.m_A << std::endl;//直接调用调用的是子类的成员属性
    //如果通过子类对象 访问到父类中同名成员，需要加作用域
    std::cout << "s1.m_A = " << s1.Base::m_A << std::endl;
}
//同名成员函数
void test02(){
    Son s1;
    s1.func();//直接调用调用的是子类的成员函数
    s1.Base::func();
    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中的所有同名成员,如果想要访问到父类中被隐藏的成员函数，需要加作用域
    s1.Base::func(1);
}
int main() {
//    test01();
test02();
    return 0;
}
