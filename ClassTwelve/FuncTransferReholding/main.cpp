#include <iostream>

/* 函数调用运算符重载
 * 函数调用运算符()也可以重载
 * 由于重载后使用的方式非常像函数的调用，因此被称为仿函数
 * 仿函数没有固定写法，非常灵活
 */

class MyPrint {
public:
    //重载函数调用运算符
    void operator()(std::string test) {
        std::cout << test << std::endl;
    }
};

void MyPrint2(std::string test) {
    std::cout << test << std::endl;
}

void test01() {
    MyPrint myPrint;
    myPrint("hello world");//函数调用重载使用跟函数调用很像
    MyPrint2("hello world!");
}

//自定义加法类
class MyAdd {

public:
    int operator()(int num1, int num2) {
        return num1 + num2;
    }
};

void test02() {
    MyAdd p;
    std::cout << p(1, 2) << std::endl;

    //匿名函数对象MyAdd(),当前行执行完毕立即被释放
    std::cout << MyAdd()(100, 100) << std::endl;
}

int main() {
    test01();
    test02();
    return 0;
}
