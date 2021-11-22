#include <iostream>
#include <fstream>
/* 二进制文件
 * 以二进制的方式对文件进行读写操作
 * 打开方式要指定为ios::binary
 */

/* 写文件
 * 二进制方式写文件主要利用流对象调用成员函数write
 * 函数原型：ostream &write(const char *buffer,int len);
 * 参数解释：字符指针buffer指向内存中的一段存储空间，len是读写的字节数
 *
 * 文件输出流对象 可以通过write函数，以二进制的方式写数据
 */

class Person {
public:
    char m_Name[64];
    int m_Age;
};

void test01() {
    std::ofstream ofs("person.txt", std::ios::binary | std::ios::out);
//    ofs.open("person.txt", std::ios::binary | std::ios::out);
//    if (!ofs.is_open()){std::cout<<"文件打开失败"<<std::endl;}
    Person p{"cheung", 13};
    ofs.write((const char *) &p, sizeof(Person));
    ofs.close();
}

void test02() {
    Person p;
    std::ifstream ifs("person.txt", std::ios::binary | std::ios::in);
    if (!ifs.is_open()) {
        std::cout << "文件打开失败" << std::endl;
        return;
    }
    ifs.read((char *) &p, sizeof(Person));
    std::cout << p.m_Name << "\n" << p.m_Age << std::endl;
    ifs.close();
}

int main() {
//    test01();
    test02();
    return 0;
}
