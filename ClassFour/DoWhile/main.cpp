#include <iostream>
/* do...while循环语句
 * 作用：满足循环条件，执行循环语句
 * 语法：do{循环语句} while(循环条件);
 * 注意：与while之间的区别在于do...while会先执行一次循环语句，再判断循环条件
 */
int main() {
    //do...while语句
    //再屏幕上输出0-9这十个数字
    int num=0;
    do {
        std::cout<<num<<std::endl;
        num++;
    } while (num<10);

    return 0;
}
