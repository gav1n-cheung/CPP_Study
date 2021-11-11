#include <iostream>
/*转义字符
 * 用于表示一些不能显示出来的ASCII字符
 * 常用的转义字符有：\n \\ \t
 * \n 换行
 * \t 水平指标
 * \\ 输出\
 *
 *
 * */
int main() {
    //换行符\n
    std::cout<<"hello world"<<std::endl;//通过endl可以实现换行作用
    std::cout<<"hello world \n";//通过\n也可以实现换行
    std::cout<<"hello world";//此时没有进行换行
    std::cout<<"hello world";
    std::cout<<"\\"<<std::endl;//输出反斜杠
    std::cout<<"aaaa\thelloworld"<<std::endl;//使用\t进行水平制表，则与前者一共占8个字符
    std::cout<<"aaaaaa\thelloworld"<<std::endl;//
    std::cout<<"aaaa\thelloworld"<<std::endl;//
    return 0;
}
