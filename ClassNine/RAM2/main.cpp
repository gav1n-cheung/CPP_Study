#include <iostream>

/* 栈区：
 * 由编译器自动分配释放，存放函数的参数值，局部变量等
 * 注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器释放
 */

int *func(int b) { //形参数据也会放在栈区
    int a = 10;//局部变量--存放在栈区，栈区的数据在函数执行完后自动释放
    return &a;//返回局部变量的地址
}


int main() {
    int *p = func(1);
    std::cout << "func返回值:" << *p << std::endl;//第一次可以打印正确的数字，是因为编译器做了保留
    std::cout << "func返回值:" << *p << std::endl;//第二次这个数据不再保留了
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
