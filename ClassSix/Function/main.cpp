#include <iostream>

/* 函数
 * 作用：将一段经常使用的代码封装起来，减少重复代码
 * 一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。
 *
 * 函数的定义：
 * 一般分为五个步骤：
 * （1）返回值类型
 * （2）函数名
 * （3）参数表列
 * （4）函数体语句
 * （5）return 表达式
 *
 *  返回值类型 函数名 (参数列表){
 *      函数体语句
 *      return 表达式
 *  }
 */
/* 函数的常见样式
 * 常见的函数有四种:
 * (1)无参无返
 * (2)有参无返
 * (3)无参有返
 * (4)有参有返
 */

//实现一个加法函数。功能是，传入两个整型，计算其和并返回
//num1和num2并没有实际数值，称为形参
int plusNum(int num1,int num2){
    return num1+num2;
}

//如果函数不需要返回值，声明时候可以写void
void swap(int num1,int num2){
    std::cout<<"交换前:"<<"\t"<<"num1 = "<<num1<<"\tnum2 = "<<num2<<std::endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    std::cout<<"交换后:"<<"\t"<<"num1 = "<<num1<<"\tnum2 = "<<num2<<std::endl;
//    return; 返回值不需要的时候，可以不写return
}

//无参无返
void test01(){
    std::cout<<"this is test01"<<std::endl;
}

//有参无返
void test02(int a){
    std::cout<<"this is test01,a = "<<a<<std::endl;
}

//无参有返
int test03(){
    std::cout<<"this is test03 ";
    return 2;
}

//有参有返
int test04(int a){
    std::cout<<"this is test04 ";
    return a+1;
}

int main() {
    //函数调用
    //1和2为实参，当调用函数的时候，实参的值会传递给形参
    int result=plusNum(1,2);
    std::cout<<result<<std::endl;

    //值传递，所谓值传递，就是函数调用时实参将数据传入给形参
    //值传递时，如果形参发生变化，并不会影响实参
    int num1=10;
    int num2=20;
    swap(num1,num2);
    //实际的实参并没有发生交换,值传递是修饰不了实参的
    std::cout<<"交换后:"<<"\t"<<"num1 = "<<num1<<"\tnum2 = "<<num2<<std::endl;

    test01();//无参无返函数的调用
    test02(2);//有参无返函数调用
    std::cout<<"this is test03 "<<test03()<<std::endl;
    std::cout<<test04(3)<<std::endl;
    return 0;
}
