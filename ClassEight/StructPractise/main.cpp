#include <iostream>

/* 结构体案例
 * 案例描述:
 * 学校正在做毕设项目,每个老师带领五个学生,总共有三名老师,需求如下:
 * 设计学生和老师的结构体,其中在老师的结构体中,有老师姓名和一个存放五名学生的数组作为成员
 * 学生的成员有姓名、考试分数，创建数组存放３名老师，通过函数给每个老师及所带学生赋值
 * 最终打印出老师数据以及老师所带学生数据
 */
struct student {
    std::string name;
    int score;
};

struct teacher {
    std::string name;
    student std[5];
};

void changeInfo(teacher *p, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << "please input teacher " << i + 1 << "'s name." << std::endl;
        std::cin >> (p + i)->name;
        for (int j = 0; j < 5; ++j) {
            std::cout << "please input teacher " << i + 1 << "'s student" << j + 1 << "'s name" << std::endl;
            std::cin >> (p + i)->std[j].name;
            std::cout << "please input teacher " << i + 1 << "'s student" << j + 1 << "'s score" << std::endl;
            std::cin >> (p + i)->std[j].score;
        }
        std::cout << "teacher" << i + 1 << "name:\t" << (p + i)->name << std::endl;
        for (int j = 0; j < 5; ++j) {
            std::cout << "student" << j + 1 << "name:" << (p + i)->std[j].name << "\tscore:" << (p + i)->std[j].score
                      << std::endl;
        }
    }
}

void printInfo(const teacher *p, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << "teacher" << i + 1 << "name:\t" << (p + i)->name << std::endl;
        for (int j = 0; j < 5; ++j) {
            std::cout << "student" << j + 1 << "name:" << (p + i)->std[j].name << "\tscore:" << (p + i)->std[j].score
                      << std::endl;
        }
    }
}

int main() {
    teacher teacherArr[3];
    int length = sizeof(teacherArr) / sizeof(teacherArr[0]);
    changeInfo(teacherArr, length);
    printInfo(teacherArr, length);
    return 0;
}
