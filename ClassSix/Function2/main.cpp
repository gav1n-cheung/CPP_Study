#include <iostream>
/* 函数声明
 * 作用：告诉编译器函数名称及如何调用函数，函数的实际主题可以单独定义
 * 函数的声明可以多次，但函数的定义只有一次
 */
//比较函数，实现两个整型的比较，返回较大值
int max(int a,int b);

int main() {
    std::cout<<max(20,40)<<std::endl;
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

