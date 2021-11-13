#include <iostream>
/* 结构体做函数参数
 * 作用：将结构体作为参数向函数中传递
 * 传递方法有两种：
 * （1）值传递
 * （2）地址传递
 * 如果想要修改主函数参数，则使用值传递；否则使用地址传递
 */
struct student{
    std::string name;
    int age;
    int score;
};
//1、值传递
void printStudent(student s1){
    s1.score=100;
    std::cout<<"值传递 姓名："<<s1.name<<"\t年龄："<<s1.age<<"\t成绩:"<<s1.score<<std::endl;
}
//2、地址传递
void printStudentPointer(student *s1){
    s1->score=100;
    std::cout<<"地址传递 姓名："<<s1->name<<"\t年龄："<<s1->age<<"\t成绩:"<<s1->score<<std::endl;
}
int main() {
    //将学生传入到一个参数中，打印学生身上的所有信息
    student s1={"cheung",20,85};
    std::cout<<"main输出 姓名："<<s1.name<<"\t年龄："<<s1.age<<"\t成绩:"<<s1.score<<std::endl;
    printStudent(s1);
    std::cout<<"值传递后 姓名："<<s1.name<<"\t年龄："<<s1.age<<"\t成绩:"<<s1.score<<std::endl;
    printStudentPointer(&s1);
    std::cout<<"地址传递后 姓名："<<s1.name<<"\t年龄："<<s1.age<<"\t成绩:"<<s1.score<<std::endl;
    return 0;
}
