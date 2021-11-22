#include <iostream>
/* 继承同名静态成员变量处理方式
 * 问题：继承中同名的静态成员在子类对象上如何进行访问？
 *
 * 静态成员和非静态成员出现同名，处理方式一致：
 * （1）访问子类同名成员，直接访问即可
 * （2）访问父类同名成员，需要加作用域
 * 同名静态成员处理方式和非静态处理方式一致，只不过有两种访问方式(通过对象和通过类名)
 */

//继承中的同名静态成员处理方式
class Base {
public:
    static int m_A;

    static void func() {
        std::cout << "Base 静态方法" << std::endl;
    }
    static void func(int a) {
        std::cout << "Base 静态有参方法" << std::endl;
    }
};

int Base::m_A = 100;

class Son : public Base {
public:
    static int m_A;

    static void func() {
        std::cout << "Son 静态方法" << std::endl;
    }

};

int Son::m_A = 200;

void test01() {
    //通过对象访问静态成员
    std::cout << "通过对象访问" << std::endl;
    Son s;
    std::cout << "Son m_A = " << s.m_A << std::endl;
    std::cout << "Base m_A = " << s.Base::m_A << std::endl;
    //通过类名访问静态成员
    std::cout << "通过类名访问" << std::endl;
    std::cout << "Son m_A = " << Son::m_A << std::endl;
    //第一个::通过类名的方式来访问,第二个::通过作用域来访问
    std::cout << "Base m_A = " << Son::Base::m_A << std::endl;
}

void test02() {
    Son s;
    //通过对象进行访问
    s.func();
    s.Base::func();
    //通过类名进行访问
    Son::func();
    Son::Base::func();
//    Son::func(100);//同样地不能通过子类来直接调用父类的同名有参方法,也被子类的同名函数所隐藏了
    Son::Base::func(10);
}

int main() {
//    test01();
    test02();
    return 0;
}
