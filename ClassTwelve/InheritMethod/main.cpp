#include <iostream>
/* 继承方式
 * 继承的语法：class 子类:继承方式 父类
 * 继承方式一共有三种：
 * （1）公共继承
 * （2）保护继承
 * （3）私有继承
 */

//公共继承
class Base1 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1 {
public:
    void func() {
        m_A = 10;//父类中的公共权限成员到子类中依然是公共权限
        m_B = 10;//父类中的保护权限成员到子类中依然是保护权限
//        m_C;//父类中的私有权限成员子类中访问不到
    }
};

class Son2 : protected Base1 {
public:
    void func() {
        m_A = 10;//父类中的保护权限成员到子类中依然是保护权限
        m_B = 10;//父类中的保护权限成员到子类中依然是保护权限
        //        m_C;//父类中的私有权限成员子类中访问不到
    }
};

class Son3:private Base1{
public:
    void func() {
        m_A = 10;//父类中的保护权限成员到子类中依然是保护权限
        m_B = 10;//父类中的保护权限成员到子类中依然是保护权限
        //        m_C;//父类中的私有权限成员子类中访问不到
    }
};

class GrandSon3:public Son3{
public:
    void func(){
//        m_A=10;//父类中的私有权限成员子类中访问不到
    }
};

void test01() {
    Son1 s1;
    s1.m_A = 100;//public类外仍可以访问
//    s1.m_B//protected类外不可以访问
    Son2 s2;
//    s2.m_A;//protected类外不可以访问

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
