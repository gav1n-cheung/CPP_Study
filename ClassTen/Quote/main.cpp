#include <iostream>

/* 引用
 * 作用：给变量起别名
 * 语法：数据类型 &别名=原名
 * 注意事项：
 *  （1）引用必须初始化
 *  （2）引用一旦初始化后，就不可以更改了
 */

int main() {
    int a = 10;
    int &b = a;
    b = 20;
    //两者的地址是一样的
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    int num1 = 10;
//    int &num2;//必须初始化，语法错误
    int &num3 = num1;
    int num4 = 20;
    num3 = num4;//赋值操作，而非引用
    std::cout << "num1=" << num1 << std::endl;
    std::cout << "num3=" << num3 << std::endl;
    std::cout << "num4=" << num4 << std::endl;


    return 0;
}
