#include <iostream>

/* 函数提高
 * 3.1函数默认参数
 *  在C++中，函数的形参列表中的形参是可以有默认值的
 *  语法：返回值类型 函数名 (参数=默认值){}
 *  注意事项：
 *  （1）如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值
 *  （2）声明和实现只能一个有默认参数
 */

int func3(int a=10,int b=10);

//如果给函数设定了默认值，则有默认值的参数可以在调用的时候不声明.
//如果自己传入了数据，则可以用自己的数据，如果没有，则使用默认值
int func(int a = 40, int b = 20, int c = 10) {
    return a + b + c;
}


//*  注意事项：如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值，b有了默认参数，则c必须要有
int func2(int a, int b = 10, int c = 30) {

    return a + b + c;
}

//
int func3(int a,int b){
    return a+b;
}

int main() {

    std::cout << func(10, 20, 30) << std::endl;
    std::cout << func() << std::endl;//由于三个参数都有了默认值，则可以不声明这些参数
    std::cout << func(20) << std::endl;//由于三个参数都有了默认值，则可以不声明这些参数

    return 0;
}
