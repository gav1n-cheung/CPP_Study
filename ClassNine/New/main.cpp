#include <iostream>

/* new操作符
 * C++中利用new操作符在堆区开辟数据
 * 堆区开辟的数据，由程序员手动开辟，手动释放，释放多利用操作符delete
 * 语法:new 数据类型
 * 利用new创建的数据，会返回该数据对应的类型指针
 */

//1、new的基本语法
int *func() {
    //利用new创建的数据，会返回该数据对应的类型指针
    int *p = new int(10);
    return p;
}

void test() {
    int *p = func();
    *p = 100;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << *p << std::endl;
    std::cout << *p << std::endl;
    delete p;//释放内存
    std::cout << *p << std::endl;//释放内存后，在访问该内存就是非法操作会报错
}

void test2() {
    //利用new在堆区创建十个整型数据的数组
    int *p = new int[10];//[10]代表数组有十个元素，返回这个数组的首地址
    for (int i = 0; i < 10; ++i) {
        *(p + i) = i + 100;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << *(p + i) << std::endl;
    }
    //释放堆区的数组需要加[]才行
    delete[]p;
    for (int i = 0; i < 10; ++i) {
        std::cout << p[i] << std::endl;
    }


}

int main() {
    test();
    test2();


    return 0;
}
