#include <iostream>
//sizeof关键字 利用sizeof关键字可以统计数据类型所占内存大小
//整型: short(2) int(4) long(4) long long(8)
//short < int <=long <=long long
int main() {
    std::cout<<"short 类型所占内存空间为: "<<sizeof(short)<<std::endl;
    std::cout<<"int 类型所占内存空间为: "<<sizeof(int)<<std::endl;
    std::cout<<"long 类型所占内存空间为: "<<sizeof(long )<<std::endl;
    std::cout<<"long long  类型所占内存空间为: "<<sizeof(long long )<<std::endl;
    return 0;
}
