#include <iostream>
/* 引用做函数参数
 * 作用:函数传参时，可以利用引用的技术让形参修饰实参，但是引用的语法更加简单清楚
 * 优点：可以简化指针修改实参
 */

//交换函数--值传递
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "swap01 a=" << a << std::endl;
    std::cout << "swap01 b=" << b << std::endl;
}

//交换函数--地址传递
void swap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "swap02 a=" << *a << std::endl;
    std::cout << "swap02 b=" << *b << std::endl;
}

//交换函数--引用传递
void swap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "swap03 a=" << a << std::endl;
    std::cout << "swap03 b=" << b << std::endl;

}


int main() {
    int a = 10;
    int b = 20;

    swap01(a, b);//值传递，形参不会修饰实参
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    swap02(&a, &b);
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    swap03(a, b);//引用传递也会修饰实参
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;


    return 0;
}
