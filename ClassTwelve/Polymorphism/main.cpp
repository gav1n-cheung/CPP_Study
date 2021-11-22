#include <iostream>

/* 多态
 * 多态的基本概念：
 * 多态是C++面向对象的三大特性之一
 * 多态分为两类：
 * （1）静态多态：函数重载 和 运算符重载属于静态多态，复用函数名
 * （2）动态多态：派生类和虚函数实现运行时多态
 * 静态多态和动态多态区别：
 * （1）静态多态的函数地址早绑定 - 编译阶段确定函数地址
 * （2）动态多态的函数地址晚绑定 - 运行阶段确定函数地址
 */

//动物类
class Animal {
public:
    virtual void speak() {
        std::cout << "动物在说话" << std::endl;//sizeof(Animal)=8; 32位系统指针=4，64位系统指针=8；
        //创建虚函数会在对象中生成一个vfptr，占用8个字节，记录了虚函数的地址
        //当父类的指针或者引用指向子类对象时，就发生了多态
    }
};

//猫类
class Cat : public Animal {
public:
    void speak() {
        //当子类重写父类的虚函数，子类中的虚函数表 内部 会替换成 子类的虚函数地址
        std::cout << "小猫在说话" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "小狗在说话" << std::endl;
    }
};

//执行说话的函数
//地址早绑定 在编译阶段确定了函数的地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

//动态多态的满足条件
// 1、有继承关系
// 2、子类要重写父类的虚函数  重写：函数返回值的类型、函数的名称和参数列表才叫重写

//动态多态使用
// 父类的指针或者引用 指向子类的对象
void doSpeak(Animal &animal) {//Animal & animal = cat;
    animal.speak();
}

void test01() {
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

void test02(){
    std::cout<<"sizeof Animal = "<< sizeof(Animal)<<std::endl;
    std::cout<<"sizeof Cat = "<< sizeof(Cat)<<std::endl;
//    std::cout<<""
}


int main() {
    test01();
    test02();
    return 0;
}
