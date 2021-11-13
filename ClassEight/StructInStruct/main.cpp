#include <iostream>
/* 结构体嵌套结构体
 * 结构体中的成员可以是另外一个结构体,用于解决实际的问题
 * 例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
 */

//定义学生结构体
struct student {
    std::string name;
    int age;
    int score;
};

//定义老师结构体
struct teacher {
    int id;
    std::string name;
    student std;
};

int main() {
    teacher t1 = {1, "cheung", {"zhang", 10, 100}};
    teacher *p = &t1;
    p->std.age=20;
    std::cout << p->std.age << std::endl;
    return 0;
}
