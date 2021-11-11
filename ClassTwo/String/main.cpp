#include <iostream>
#include <string> //使用C++字符串需要包含该头文件
/*字符串型
 * 用于表示一串字符
 * （1）C风格字符串char 变量名[] =“字符串值”
 * （2）C++风格字符串 string 变量名=“字符串值”
 * */

int main() {
    std::cout << "Hello, World!" << std::endl;
    //C风格字符串
    //注意事项 char 字符串名 []
    //=后要用双引号包含起来字符串
    char str[]="hello world";
    std::cout<<str<<std::endl;
    //C++风格字符串
    //注意事项 需要包含头文件 #include <string>
    std::string str2="hello world";
    std::cout<<str2<<std::endl;
    return 0;
}
