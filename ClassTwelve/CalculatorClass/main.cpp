#include <iostream>

/* 多态案例--计算器类
 * 案例描述
 * 分别利用普通写法和多态技术，设计两个操作数进行运算的计算器类
 * 多态的优点：
 * （1）代码组织结构清晰
 * （2）可读性强
 * （3）利于前期和后期的拓展以及维护
 * C++中提倡利用多态设计程序架构，因为多态的优点有很多
 */

//普通方式实现计算器
class Calculator {
public:
    Calculator() : num1(0), num2(0) {}

    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int getResult(std::string operate) {
        if (operate == "+") { return num1 + num2; }
        else if (operate == "-") { return num1 - num2; }
        else if (operate == "*") { return num1 * num2; }
        else if (operate == "/") { return num1 / num2; }
        //如果想拓展新的功能，需要修改源码
        //在真实开发中，提倡开闭原则--对拓展进行开放，对修改进行关闭
    }

    int num1;
    int num2;
};

//多态实现计算器
class AbstractCalculator {
public:
    virtual int getResult() { return 0; };
    int num1;
    int num2;
};

//加法计算器类
class AddCalculator : public AbstractCalculator {
public:
    int getResult() {
        return num1 + num2;
    }
};

//减法计算器类
class MinusCalculator : public AbstractCalculator {
public:
    int getResult() {
        return num1 - num2;
    }
};

//乘法计算器类
class MulCalculator : public AbstractCalculator {
public:
    int getResult() {
        return num1 * num2;
    }
};

//除法计算器类
class DivCalculator : public AbstractCalculator {
public:
    int getResult() {
        return num1 / num2;
    }
};


void test01() {
    Calculator c1(10, 10);
    int result = c1.getResult("+");
    std::cout << result << std::endl;
}

void test02(){
    AbstractCalculator *abc =new AddCalculator;
    abc->num1=100;
    abc->num2=100;
    std::cout<<abc->num1<<" + "<<abc->num2<<" = "<<abc->getResult()<<std::endl;
    delete abc;

    abc=new MinusCalculator;
    abc->num1=100;
    abc->num2=100;
    std::cout<<abc->num1<<" - "<<abc->num2<<" = "<<abc->getResult()<<std::endl;

    abc=new MulCalculator;
    abc->num1=100;
    abc->num2=100;
    std::cout<<abc->num1<<" * "<<abc->num2<<" = "<<abc->getResult()<<std::endl;

}

int main() {
//    test01();
test02();
    return 0;
}
