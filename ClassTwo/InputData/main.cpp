#include <iostream>
#include <string>
//用于从键盘获取数据
//关键字 cin
//语法：cin>>变量
int main() {
    //整型
    int a=0;
    std::cout<<"请给整型变量a赋值： "<<std::endl;
    std::cin>>a;
    std::cout<<"整型变量a的输出为："<<a<<std::endl;

    //浮点类型
    float b=3.14f;
    std::cout<<"请给浮点变量b赋值： "<<std::endl;
    std::cin>>b;
    std::cout<<"浮点变量b的输出为： "<<b<<std::endl;

    //字符型
    char c='a';
    std::cout<<"请给字符型c赋值： "<<std::endl;
    std::cin>>c;
    std::cout<<"字符型c的输出为： "<<c<<std::endl;

    //字符串
    std::string s="hello";
    std::cout<<"请输入字符串类型为： "<<std::endl;
    std::cin>>s;
    std::cout<<"字符串s的输出为： "<<s<<std::endl;

    //布尔数据类型
    bool flag= true;
    std::cout<<"请输入布尔数据类型为： "<<std::endl;
    std::cin>>flag;
    std::cout<<"布尔数据类型的输出为: "<<flag<<std::endl;
    return 0;
}
