#include <iostream>

/* 纯虚函数和抽象类
 * 在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
 * 因此可以将虚函数改为纯虚函数
 * 纯虚函数语法：virtual 返回值类型 函数名 {参数列表}=0;
 * 当类中有了纯虚函数，这个类也被称为***抽象类****
 *
 * 抽象类特点：
 * （1）无法实例化对象
 * （2）子类必须重写抽象类中的纯虚函数，否则也属于抽象类
 */

class Base {
public:
    //纯虚函数的定义
    virtual void func() = 0;

};

class Son : public Base {
public:
    void func() {
        std::cout << "Son子类函数输出" << std::endl;
    }
};

class Son2 : public Base {
public:
    void func() {
        std::cout << "Son2子类函数输出" << std::endl;
    }
};

void test01() {
//    Base b;//抽象类无法实例化对象
//    Base *b = new Base;//
    Base *s = new Son;//如果不重写纯虚函数，则子类也是抽象类，无法实例化对象
    s->func();
    Base *s1=new Son2;
    s1->func();
}

int main() {
    test01();
    return 0;
}
