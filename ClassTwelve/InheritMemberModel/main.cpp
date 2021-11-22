#include <iostream>

//继承中的对象模型
/*从父类继承过来的成员，哪些属于子类对象中？
 *     //父类中私有成员属性是被编译器隐藏了，子类访问不到，但是确实被继承下去了
 */

class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public Base {
public:
    int m_D;
};

void test01() {
    Son s1;
    //在父类中所有的非静态成员属性，都会被子类继承下去
    //父类中私有成员属性是被编译器隐藏了，子类访问不到，但是确实被继承下去了
    std::cout << "size of son = " << sizeof(s1) << std::endl;//16
}

int main() {
    test01();
    return 0;
}
