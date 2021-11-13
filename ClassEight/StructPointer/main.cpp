#include <iostream>

/* 结构体指针
 * 通过指针访问结构体中的成员
 * 利用操作符->可以通过结构体指针访问结构体属性
 */
struct Student{
    std::string name;
    int age;
    int score;
};

int main() {
    //创建学生结构体变量
    Student s1={"cheng",10,10};
    //通过指针指向结构体变量
    Student *p=&s1;
    //通过指针访问结构体
    std::cout << p->age << std::endl;
    return 0;
}
