#include <iostream>
/* 跳转语句
 * break语句
 * 用于跳出选择结构或循环结构
 * break使用的时机：
 * （1）出现在switch条件语句中，作用是用于终止case并跳出switch
 * （2）出现在循环语句中，作用是跳出当前的嵌套循环
 * （3）出现在嵌套循环中，跳出最近的内层循环语句
 */
int main() {
    //出现在switch语句中
/*
    std::cout<<"请选择副本难度：\n1、简单\n2、普通\n3、困难\n";
    int select=0;
    std::cin>>select;
    switch (select) {
        case 1:
            std::cout<<"您选择了简单难度"<<std::endl;
            break;
        case 2:
            std::cout<<"您选择了普通难度"<<std::endl;
            break;
        case 3:
            std::cout<<"您选择了困难难度"<<std::endl;
            break;
    }
*/
    //出现在循环语句中
    for (int i = 0; i < 9; ++i) {
        if (i==5) break;
        std::cout<<i<<std::endl;
    }
    //出现在嵌套循环中
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (j==5) break;
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}
