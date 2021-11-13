#include <iostream>
/* 结构体基本概念
 * 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
 *
 * 结构体定义和使用
 * 语法： struct 结构体名 {结构体成员列表};
 * 通过结构体创建变量的方法有三种：
 * （1）struct结构体名 变量名
 * （2）struct结构体名 变量名={成员1值，成员2值...}
 * （3）定义结构体顺便创建变量
 */

/* 1、创建学生的数据类型
 * 姓名 年龄 分数
 * 一些类型的集合组成的一个类型
 */
//2.3 方法三
//创建结构体变量时关键字可以省略，但是创建结构体定义时不可以省略
struct Student {
    //成员列表
    std::string name;
    int age;
    int score;
} s3;

void printStudent(Student temp) {
    std::cout << "姓名 \t 年龄\t 成绩 " << std::endl;
    std::cout << temp.name << "\t " << temp.age << "\t\t " << temp.score << std::endl;
}

int main() {
    //2、通过学生类型创建具体学生
    //2.1 方法一
    Student student1;
    //给具体学生的属性赋值
    student1.name = "cheung";
    student1.age = 10;
    student1.score = 100;
    printStudent(student1);
    //2.2 方法二
    Student student2 = {"cheung", 24, 60};

    s3.name = "zhang";
    s3.score = 100;
    s3.age = 10;
    printStudent(s3);

    return 0;
}
