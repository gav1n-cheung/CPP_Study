#include <iostream>
/* 构造函数调用规则
 * 默认情况下：C++编译器至少给一个类添加3个参数
 * （1）默认构造函数（无参，函数体为空）
 * （2）默认析构函数（无参，函数体为空）
 * （3）默认拷贝构造函数，对属性进行值拷贝
 *
 * 构造函数调用规则如下：
 * （1）如果用户定义有参构造函数，C++不会提供默认无参构造，但是会提供默认拷贝构造
 * （2）如果用户定义拷贝构造函数，C++不会再提供其他构造函数
 */

class Person{
public:
/*    Person(){
        std::cout<<"默认构造函数"<<std::endl;
    }*/
/*    Person(int a){
        age=a;
        std::cout<<"有参构造函数"<<std::endl;
    }*/
    Person(const Person &p){
        age=p.age;
        std::cout<<"拷贝构造函数"<<std::endl;
    }
    ~Person(){
        std::cout<<"析构函数"<<std::endl;
    }
    int age;
};

/*void test01(){
    Person p;
    p.age=19;
    //如果将Person类里的拷贝构造函数注释掉，则系统会自行生成一个拷贝构造函数，简单地传入对象的值赋给接收对象的对应属性
    Person p2(p);
    std::cout<<"p2的年龄为"<<p2.age<<std::endl;
}*/

void test02(){
//    Person p;//如果写了有参构造函数，则编译器不会自行创建默认构造函数，则这种通过默认构造函数创建对象的方法是不对的；
//但是依然提供拷贝构造
//而如果只提供了拷贝构造函数，则其他的构造函数都不会被提供了
/*    Person p(10);
    Person p2(p);
    std::cout<<p2.age<< std::endl;*/
}

int main() {
//    test01();
test02();
    return 0;
}
