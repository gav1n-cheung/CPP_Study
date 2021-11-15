#include <iostream>

/* 函数重载
 * 作用：函数名可以相同，提高复用性
 * 函数重载满足条件：
 * （1）同一个作用域下
 * （2）函数名称相同
 * （3）函数 参数类型不同 或者 个数不同 或者 顺序不同
 * 注意事项：函数的返回值不可以作为函数重载的条件
 */

void func() {
    std::cout << "func的调用" << std::endl;
}

void func(int a) {
    std::cout << "func的调用！" << std::endl;
}

void func(double a) {
    std::cout << "func的调用！" << std::endl;
}

void func(int a, double b) {

}

void func(double b, int a) {

}


int main() {
    func();
    func(10);
    return 0;
}
