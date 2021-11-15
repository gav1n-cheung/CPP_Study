#include <iostream>

/* 引用的本质在C++内部实现就是一个指针常量
 * 引用会自动转换为对应类型的const修饰的指针，即常量指针，const * ，常量指针不可以修改指针的指向，但是可以修改指向的值,即const修饰*
 * （指针常量 * const不可以修改指针指向的值，但是可以修改其指向即const修饰变量）
 * C++推荐使用引用技术，因为语法方便，引用的本质就是指针常量，但是所有指针操作编译器都帮我们做了
 */

/* 常量引用
 * 作用：常量引用主要用来修饰形参，防止误操作
 * 再函数形参列表中，可以加**const修饰形参**，防止形参改变实参
 */

void show(const int &num){
//    num=1000;
    std::cout<<num<<std::endl;
}


int main() {
    int a = 10;
    //加上const之后，编译器将代码修改为 int temp=10;int & ref=temp;
    const int &ref = 10;//引用必须引用堆区或者栈区的数据，不可以直接引用常量区的数据，但是用const修饰可以直接引用常量
//    ref=20;//由于const修饰ref变为常量，不可以重新赋值

    int b=100;
    show(b);
    std::cout<<b<<std::endl;
    return 0;
}
