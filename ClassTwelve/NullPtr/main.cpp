#include <iostream>

/* 空指针访问成员函数
 * C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
 * 如果用到this指针，需要加以判断保证代码的健壮性
 */
class Person{
public:
    void showClassName(){
        std::cout<<"this is Person class"<<std::endl;
    }
    //这里的age其实是this->age,而此时的this是一个空指针，无法访问属性
    void showPersonAge(){
        if (this==NULL){return;}//加一个判断是否为NULL指针
        std::cout<<"年龄为:"<<age<<std::endl;
    }
    int age;
};

void test01(){
    Person *p=NULL;
    p->showClassName();
    p->showPersonAge();
}
int main() {
    test01();
    return 0;
}
