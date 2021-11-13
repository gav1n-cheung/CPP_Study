#include <iostream>
//指针也是一种数据类型，其占内存空间为多少？

int main() {
    int a = 10;
    int *p = &a;
    //指针类型存储地址，在32位系统中占4个字节，在64位系统中占8个字节
    std::cout <<"sizeof int * = "<< sizeof(int *) << std::endl;
    std::cout <<"sizeof float * = "<< sizeof(float *) << std::endl;
    return 0;
}
