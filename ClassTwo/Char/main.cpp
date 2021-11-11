#include <iostream>
/*字符型用于显示单个字符
 * 需要注意的是：
 * （1）在显示单个字符型变量时，用单括号将字符括起来，不要用双引号
 * （2）单引号内只能有一个字符，不可以是字符串
 * C和C++中字符型变量只占用一个字节
 * 字符型变量并不是将字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
 */

int main() {
    //字符型变量创建方式
    char ch='a';
    std::cout<<ch<<std::endl;
    //字符型变量所占内存大小
    std::cout<<"char 类型所占内存大小为： "<< sizeof(char )<<std::endl;
    //字符型变量常见错误
    char ch2='b';//正确
//    char ch2="b";//错误，不能是双引号
//    char ch2="abc";//错误，不能是多个字符
    //字符型变量对应的ASCII编码 a--97;A--65
    std::cout<<(int )ch<<std::endl;
    return 0;
}
