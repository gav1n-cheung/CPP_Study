#include <iostream>

/* const修饰成员函数
 * 常函数：
 * （1）成员函数后加const后称为这个函数为常函数
 * （2）常函数内不可以修改成员属性
 * （3）成员属性声明时加关键字mutable后，在常函数中依然可以修改
 * 常对象：
 * （1）声明对象前加const称该对象为常对象
 * （2）常对象只能调用常函数
 */
class Person {
public:
    Person(){}
    //this指针的本质是指针常量，指针的指向是不可以修改的
    //Person * const this; 就是this的本质，因此修改this指向是不可以修改的
    //而在函数名后添加const则变为了const Person * const this; this的指向和指向的值都不可以修改
    void showPerson() const {
        this->m_B=100;
//        this->m_A=100;//加const后不能修改m_A
//        this = NULL;//this指针是不可以修改指针的指向的
    }
    void fun(){

    }

    int m_A;
    mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值,加上关键字mutable，常函数内的值也可以修改
};

void test01() {
    Person p;
    p.showPerson();
}

void test02(){
    const Person p;//在对象前加const，变为常对象,需要在类内手动添加一个默认构造函数，完成const类型的对象初始化
//    p.m_A=100;//常对象不能修改对象的属性
    p.m_B=100;

    //常对象只能调用常函数
    p.showPerson();
//    p.fun(); //不能调用普通成员函数，避免修改对象的属性；而常函数不能修改对象的普通属性，从而避免了这种操作
}

int main() {
    test02();
    return 0;
}
