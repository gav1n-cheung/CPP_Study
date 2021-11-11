#include <iostream>
//bool数据类型，代表真或假的值
//bool数据类型只有两个值，true--真（1），false--假(0),占一个字节
int main() {
    //创建bool数据类型
    bool flag= true;
    std::cout<<flag<<std::endl;
    flag= false;
    std::cout<<flag<<std::endl;
    //查看bool类型所占内存空间
    std::cout<<"bool 数据类型所占空间 "<< sizeof(flag)<<std::endl;
    return 0;
}
