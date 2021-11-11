#include <iostream>

//逻辑运算符
int main() {
    //逻辑运算符--非 ！用于取反操作
    int a = 10;
    //C++中除了0都为真，则！a=假（0）
    std::cout << !a << std::endl;
    std::cout << !!a << std::endl;

    //逻辑运算符--与 &&
    int num1 = 10;
    int num2 = 10;
    std::cout << (num1 && num2) << std::endl;
    num1=0;
    num2=10;
    std::cout << (num1 && num2) << std::endl;
    num1=0;
    num2=0;
    std::cout << (num1 && num2) << std::endl;

    //逻辑运算符--或 ||
    num1=10;
    num2=10;
    std::cout<<(num1||num2)<<std::endl;
    num1=0;
    num2=10;
    std::cout<<(num1||num2)<<std::endl;
    num1=0;
    num2=0;
    std::cout<<(num1||num2)<<std::endl;

    return 0;
}
