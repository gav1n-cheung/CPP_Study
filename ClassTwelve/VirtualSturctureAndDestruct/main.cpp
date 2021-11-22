#include <iostream>

/* 虚析构和纯虚析构
 * 多态使用是，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数
 * 解决方式：将父类中的析构函数改为虚析构或者纯虚析构
 * 虚析构和纯虚析构共性：
 * （1）可以解决父类指针释放子类对象
 * （2）都需要有具体的函数实现
 *
 * 虚析构和纯虚析构区别：
 * （1）如果是纯虚析构，该类属于抽象类，无法实例化对象
 *
 * 虚析构语法：
 * virtual ~类名()
 * 纯虚析构语法：
 * virtual ~类名()=0;
 * 类名::~类名(){实现}
 *
 * 总结：
 * （1）虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
 * （2）如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
 * （3）拥有纯虚析构函数的类也属于抽象类
 */
class Animal {
public:
    Animal() {
        std::cout << "Animal 构造函数调用" << std::endl;
    }
    //使用虚析构可以解决 父类指针释放子类对象时不干净的问题
/*
    virtual ~Animal(){ //需要声明，也需要实现，有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
        std::cout<<"Animal 析构函数调用"<<std::endl;
    }
*/
    virtual ~Animal() = 0;

    virtual void speak() = 0;
};

Animal::~Animal() {
    std::cout<<"Animal 纯虚析构函数调用"<<std::endl;
}

class Cat : public Animal {
public:
    Cat(std::string name) {
        std::cout << "cat构造函数调用" << std::endl;
        this->name = new std::string(name);
    }

    ~Cat() {
        if (name != NULL) {
            std::cout << "cat析构函数调用" << std::endl;
            delete name;
            name = NULL;
        }
    }

    void speak() {
        std::cout << *name << "小猫叫" << std::endl;
    }

    std::string *name;
};

void test01() {
    Animal *a = new Cat("tom");
    a->speak();
    //父类指针在析构时候 不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏
    delete a;
}

int main() {
    test01();
    return 0;
}
