#include <iostream>

/* 设计一个学生类
 * 属性：姓名、学号
 * 可以给姓名和学号赋值，可以显示学生的姓名和学号
 */

class Student {
    //类中的属性和行为都称为成员
    //属性 成员属性 成员变量
    //行为 成员函数 成员方法
private:
    std::string s_name;
    int s_id;
public:
    void setName(std::string name) {
        s_name = name;
    }

    void setId(int id) {
        s_id = id;
    }

    void printInfo() {
        std::cout << "姓名： " << s_name << "\t学号： " << s_id << std::endl;
    }
};

int main() {
    Student s1;//实例化对象
//    std::cout<<"请输入学生姓名:"<<std::endl;
    s1.setName("cheung");
//    std::cout<<"请输入学生姓名:"<<std::endl;
    s1.setId(1000120);
    s1.printInfo();
    return 0;
}
