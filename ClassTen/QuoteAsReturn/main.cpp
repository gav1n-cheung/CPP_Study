#include <iostream>

/* 引用做函数返回值
 * 作用：引用是可以作为函数返回值的
 * 注意：**不要返回局部变量引用**
 * 用法：函数调用作为左值
 */

int &test01() {
    int a = 10;
    return a;
}

int &test02() {
    static int a = 10;
    std::cout<<&a<<std::endl;
    return a;
}


int main() {
    //引用作为函数的返回值
    //1、不要返回局部变量的引用
/*
    int &ref=test01();
    std::cout<<"ref = "<<ref<<std::endl;//第一次打印正确
    std::cout<<"ref = "<<ref<<std::endl;//第二次由于内存释放掉了，则输出错误
*/

    int &ref2 = test02();
    std::cout<<&ref2<<std::endl;
    std::cout << "ref2 = " << ref2 << std::endl;//第一次打印正确
    //2、函数调用可以作为左值，方法返回的就是一个引用，作为左值可以进行重新赋值，而ref2就是a的一个别名，则进行a的赋值会影响ref2
    test02()=1000;

    std::cout << "ref2 = " << ref2 << std::endl;//第二次由于内存释放掉了，则输出错误






    return 0;
}
