#include <iostream>

/* 函数占位符
 * C++中函数的形参列表中可以有占位参数，用来做占位，调用函数时必须添补该位置
 * 语法： 返回值类型 函数名 (数据类型){}
 * 占位参数可以有默认参数
 */

void func(int a, int =10) {
    //该占位参数无法使用，
    std::cout << "this is a function" << std::endl;
}


int main() {
    func(10, 10);

    return 0;
}
