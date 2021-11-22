#include <iostream>

/* 拷贝构造函数使用时机：
 * （1）使用一个已经创建完毕的对象来初始化一个新对象
 * （2）值传递的方式给函数参数传值
 * （3）以值方式返回局部对象
 */

class Person {
public:
    Person() {
        std::cout << "Person默认构造函数调用" << std::endl;
    }

    Person(int a) {
        age = a;
        std::cout << "Person有参构造函数调用" << std::endl;
    }

    Person(const Person &p) {
        age = p.age;
        std::cout << "Person拷贝构造函数调用" << std::endl;
    }

    ~Person() {
        std::cout << "Person析构函数调用" << std::endl;
    }

    int age;
};

//使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
    Person p1(10);
    Person p2(p1);
    std::cout << "p2的年龄" << p2.age << std::endl;
}

//值传递的方式给函数参数传值
void doWork(Person p) {
    p.age = 100;
}

void test02() {
    Person p(10);
    doWork(p);
    std::cout << p.age << std::endl;
}

//值方式返回局部对象
Person doWork2() {
    Person p1(10);
    std::cout << &p1 << std::endl;
    return p1;
}

void test03() {
    //使用这种方法构造对象，首先先调用默认构造函数，得到一个对象，此时&p1=0x7fff88f5cbb0
    //再调用DoWork2()，方法内部先调用有参构造函数，得到一个对象，其地址为0x7fff88f5cbb4
    //再将该对象返回到test03()中，返回一个对象，不会调用拷贝构造函数，而是将对象的值直接给到返回的对象中，
    //接收doWork2()的对象地址不变，但是其值发生了变化。整个过程中，test03的对象p1其实没有发生地址的变化，只有值的变化
    //也就是说，doWork2()在这种调用形式下，只是修改了p1的值，由于p1承载了返回对象的值，即使doWork2()中的对象被析构了，
    // 也不会对已经得到值的p1产生影响
    Person p1;
    std::cout << &p1 << std::endl;
    p1 = doWork2();
    std::cout << &p1 << std::endl;
    std::cout << p1.age << std::endl;
    std::cout << p1.age << std::endl;
}

void test04() {
    //使用这种调用方法返回doWork2的对象值，doWork2的对象地址直接给到p1，p1的地址变成了doWork2对象的地址
    //这个过程变为了一个有参构造函数的调用，相当于直接将doWork2的值作为有参构造的参数来构造test04的值
    Person p1 = doWork2();
    std::cout << &p1 << std::endl;
    std::cout << p1.age << std::endl;
    std::cout << p1.age << std::endl;
}


int main() {
//    test01();
//    test02();
//    test03();
//    std::cout<<"test03调用完毕"<<std::endl;
    test04();
    return 0;
}
