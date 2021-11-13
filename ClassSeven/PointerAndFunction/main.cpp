#include <iostream>
/*指针和函数
 * 1、值传递：形参改变不影响实参
 * 如果想要修改实参，就用地址传递。否则就用值传递
 */
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int a=10;
    int b=20;
    //2、地址传递
    //如果是地址传递，可以修饰实参
    swap(&a,&b);
    std::cout<<"a="<<a<<std::endl;
    std::cout<<"b="<<b<<std::endl;


    return 0;
}
