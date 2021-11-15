#include <iostream>

//循环结构
/*while 循环语句
 * 作用：满足循环条件，执行循环语句
 * 语法：while(循环条件){循环语句}
 * 只要 循环条件为真，则执行循环语句
 */
int main() {
    //while循环
    //在屏幕中打印0~9这十个数字
    for (int i = 0; i < 10; ++i) {
        std::cout<<i<<std::endl;
    }
    int num1=0;
    while(num1<10){
        std::cout<<num1<<std::endl;
        num1++;
    }
    return 0;
}
