#include <iostream>
//运算符
//用于执行代码的运算
/*主要包括一下运算符：
 * （1）算数运算符：用于处理四则运算
 * （2）赋值运算符：用于将表达式的值赋给变量
 * （3）比较运算符：用于表达式的比较，返回一个真值或假值
 * （4）逻辑运算符：用于根据表达式的值返回真值或假值
 */

int main() {
    //加减乘除
    int a1 = 10;
    int b1 = 3;
    std::cout << a1 + b1 << std::endl;
    std::cout << a1 - b1 << std::endl;
    std::cout << a1 * b1 << std::endl;
    std::cout << a1 / b1 << std::endl;//由于a1和b1都是int类型，则得到的结果也是int类型，将所有小数位舍掉

    int a2 = 10;
    int b2 = 20;
    std::cout << a2 / b2 << std::endl;//得到结果为0.5，舍去小数位，得到0

//    int a3 = 10;
//    int b3 = 0;
//    std::cout << a3 / b3 << std::endl;//不能输出该结果，除数不能为0，应该避免这样的操作

    //两个浮点数也可以相除，运算的结果也可以是小数
    double d1 = 0.5;
    double d2 = 0.22;
    std::cout << d1 / d2 << std::endl;
    //整数和浮点数相除，结果也可以是小数
    std::cout << a2 / d2 << std::endl;


    //其他算数运算
    //取模运算（取余运算）： %(本质就是求余数)
    int num1 = 10;
    int num2 = 3;
    std::cout << num1 % num2 << std::endl;
    num1 = 10;
    num2 = 20;
    std::cout << num1 % num2 << std::endl;
    num1 = 10;
    num2 = 0;
//    std::cout<<num1%num2<<std::endl;//还是不能输出，除数不能为0，则无法做取模运算

    //两个小数不能做取模运算
    double num3 = 3.14;
    double num4 = 1.1;
//    std::cout << num3 % num4 << std::endl;//语法错误，小数不能参与取模运算

    //递增递减运算：++\--
    //前置递增
    int num5=10;
    ++num5;
    std::cout<<"前置递增操作结果："<<num5<<std::endl;//结果=11
    //后置递增
    int num6=10;
    num6++;
    std::cout<<"后置递增操作结果："<<num6<<std::endl;//结果=11
    //前置递增和后置递增的区别
    //前置递增，先让变量+1，再进行表达式的运算
    int num7=10;
    int num8=++num7*10;
    std::cout<<num7<<std::endl;//结果为11
    std::cout<<num8<<std::endl;//结果为110
    int num9=10;
    int num10=num9++*10;
    std::cout<<num9<<std::endl;//结果为11
    std::cout<<num10<<std::endl;//结果为100
    //后置递增，先进行表达式的运算，再让变量+1
    return 0;
}
