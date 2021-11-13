#include <iostream>

/* const修饰指针有三种情况
 * (1)const修饰指针 --常量指针
 * (2)const修饰常量 --指针常量
 * (3)const既修饰指针，又修饰常量
 * 技巧：看const右侧紧着是指针还是常量，是指针就是常量指针，是常量就是指针常量
 */
int main() {
    int a = 10;
    int b = 20;
    const int *p = &a; //常量指针
    p = &b; //可以修改指向
//    *p=20; //不可以修改指向的值

    int *const p1 = &a;//指针常量
//    p1 = &b;//不可以修改指向
    *p1 = 20;//可以修改指向的值

    const int *const p2=&a; //const既修饰指针，又修饰常量
//    p2=&b;//不可以修改指向
//    *p2=20;//不可以修改指向的值

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
