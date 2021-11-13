#include <iostream>

/* 结构体中const使用场景
 * 作用：用const来防止误操作
 */
struct student {
    std::string name;
    int age;
    int score;
};

//使用值传递虽然不会改变实参的值，但是会在内存中拷贝同样的信息，如果调用该方法的对象很多，会占用大量的内存空间。
void printInfo(student s1) {
    std::cout << "name:" << s1.name << "age:" << s1.age << "score:" << s1.score << std::endl;
}

//而使用地址传递的方法，开辟的新空间都是一个存储地址的空间，占用内存小，不会因为结构体内部的成员变化而产生变化，即使调用了多次
//该函数，都不会占用过多的空间。但是使用值传递会导致形参的变化影响实参，发生不期望的值修改。为避免地址传递改变实参，使用const 修饰传入的参数即可。
void printInfo2(const student *s1) {
//    s1->score=120;//使用const修饰后，对形参的修改也是不被允许的,可以防止误操作
    std::cout << "name:" << s1->name << "age:" << s1->age << "score:" << s1->score << std::endl;
}

int main() {
    student s1 = {"cheung", 10, 89};
    printInfo(s1);
    printInfo2(&s1);
    return 0;
}
