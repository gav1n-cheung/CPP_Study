#include <iostream>

/* 构造函数的分类及调用
 * 两种分类方式：
 *  （1）按参数分为：有参构造和无参构造（默认构造）
 *  （2）按类型分为：普通构造和拷贝构造
 * 三种调用方法：
 * 括号法
 * 显示法
 * 隐式转换法
 */

class Person {
public:
    Person() {
        std::cout << "Person的无参构造函数调用" << std::endl;
    }

    Person(int a) {
        age = a;
        std::cout << "Person的有参构造函数调用" << std::endl;
    }

    //拷贝构造函数，为防止修改原对象，使用const修饰，避免开辟空间，使用引用参数
    Person(const Person &p) {
        //将传入的Person的所有属性拷贝到当前的Person身上
        age = p.age;
        std::cout << "Person的拷贝构造函数调用" << std::endl;
    }

    ~Person() {
        std::cout << "Person的析构函数调用" << std::endl;
    }

    int age;
};

void test01() {
    //1、括号法
    Person p1;//默认调用函数的构造
    Person p2(10);// 调用有参构造函数
    Person p3(p2);//调用拷贝构造函数
//    std::cout<<"p2对象的年龄"<<p2.age<<std::endl;
//    std::cout<<"p3对象的年龄"<<p3.age<<std::endl;
/*注意事项：
    在调用默认构造函数的时候，不要加()
    因为这种创建方法，会被编译器认为是一个函数的声明
    不会认识是在创建对象
 */
    Person p4();//这种方式不会调用默认构造函数
    void func();
    //2、显示法

    Person p5;
    Person p6 = Person(10);//有参构造
    Person p7 = Person(p6);//拷贝构造
//    Person(10);//匿名对象 特点：当前行结束后，系统会立即回收掉匿名对象，在该行调用有参构造函数后，就立即析构掉该对象了，aaaa输出在析构之后
//    std::cout<<"aaaaa"<<std::endl;
    /* 注意事项：
     * 不用利用拷贝构造函数来初始化一个匿名对象,编译器会认为Person(p6) ==== Person p6，调用的是默认构造函数,造成了p3的重定义
     */
//    Person(p6);

    //3、隐式转换法
    Person p8 = 10;//相当于写了Person p8=Person(10);有参构造
    Person p9 = p8;//相当于写了Person p9=Person(p8);拷贝构造

};

int main() {
    test01();
    return 0;
}
