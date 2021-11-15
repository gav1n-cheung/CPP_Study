#include <iostream>

/* 函数重载注意事项
 * 引用作为重载条件
 * 函数重载碰到函数默认参数
 */

void fun(int &a) {
    std::cout << "func(int &a)调用" << std::endl;
}

void fun(const int &a) {
    std::cout << "func(const int &a)调用" << std::endl;
}

//使用默认值也可以实现重载，但是调用函数报错
void fun2(int a, int b = 10) {
    std::cout << "fun2(int a,int b=10)调用" << std::endl;
}

void fun2(int a) {
    std::cout << "fun2(int a)调用" << std::endl;
}

int main() {
    int a = 10;
    fun(a);//因为a为变量，则调用无const的重载
    const int b = 100;
    fun(b);//因为b为常量，则调用有const的重载
    fun(10);//因为10为常量，则调用有const的重载，而无const的重载，接受的是一个int类型的引用，而引用的右值只能是堆区或者栈区的数据，
    //而10则是在常量区，不能赋值给引用类型，是不合法的。
//    fun2(10);//有二义性，避免这种因为默认值引起的错误
    return 0;
}
