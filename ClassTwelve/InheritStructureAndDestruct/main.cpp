#include <iostream>
/* 继承中构造和析构顺序
 * 子类继承父类后，当创建子类对象，也会调用父类的构造函数
 * 那么，父类和子类的构造和析构顺序是谁先谁后？
 * 先构造父类，再构造子类；析构顺序相反
 */

class Base{
public:
    Base(){
        std::cout<<"父类构造函数"<<std::endl;
    }
    ~Base(){
        std::cout<<"父类析构函数"<<std::endl;
    }
};

class Son:public Base{
public:
    Son(){
        std::cout<<"子类构造函数"<<std::endl;
    }
    ~Son(){
        std::cout<<"子类析构函数"<<std::endl;
    }
};

void test01(){
    Son s1;
}

int main() {
    test01();
    return 0;
}
