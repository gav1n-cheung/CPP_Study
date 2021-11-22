#include <iostream>
#include <fstream>
/* 文件操作
 * 程序运行时产生的数据都属于临时数据，程序一旦运行结束就会被释放
 * 通过文件可以将数据持久化
 * C++中对文件操作需要包含头文件<fstream>
 *
 * 文件类型分为两种：
 * （1）文本文件 -- 文件以文本的ASCII码形式存储在计算机中
 * （2）二进制文件 -- 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂他们
 *
 * 操作文件的三大类：
 * （1）ofstream : 写操作
 * （2）ifstream : 读操作
 * （3）fstream : 读写操作
 */

/* 文本文件--写文件
 * 写文件步骤如下：
 * 1 包含头文件
 *      #include<fstream>
 * 2 创建文件流
 *      ofstream ofs;
 * 3 打开文件
 *      ofs.open("文件路径",打开方式);
 * 4 写数据
 *      ofs<<"写入的数据;
 * 5 关闭文件
 *      ofs.close();
 *
 * 打开方式               解释
 * ios::in         为读文件而打开文件
 * ios::out        为写文件而打开文件
 * ios::ate        初始位置:文件尾
 * ios::app        追加方式写文件
 * ios::trunc      如果文件存在先删除，再创建
 * ios::binary     二进制方式
 *
 * 注意： 文件打开方式可以配合使用，利用 | 操作符
 * 例如： 用二进制方式写文件 ios::binary|ios::out
 */

/* 文本文件--读文件
 * 读文件与写文件步骤相似，但是读取方式相对比较多
 *
 * 读文件步骤如下：
 * （1）包含头文件
 *      #include<fstream>
 * （2）创建流对象
 *      ifstream ifs;
 * （3）打开文件并判断文件是否打开成功
 *      ifs.open("文件路径",打开方式);
 * （4）读数据
 *      四种方式读取
 * （5）关闭文件
 *      ifs.close();
 *
 *
 */

void test01() {
    std::fstream ofs;
    ofs.open("test.md", std::ios::out);
    ofs << "姓名：张三 \n性别：男 \n年龄：19" << std::endl;
    ofs.close();
}

void test02() {
    std::ifstream ifs;
    ifs.open("test.md", std::ios::in);
    if (!ifs.is_open()) {
        std::cout << "文件打开失败了" << std::endl;
        return;
    }
/*第一种读取方式
    char buf[1024] = {0};
    while (ifs>>buf){std::cout<<buf<<std::endl;}
*/
/*第二种读取方式
    char buf[1024]={0};
    while (ifs.getline(buf, sizeof(buf))){
        std::cout<<buf<<std::endl;
    }
    */
/*第三种读取方式
std::string str;
    while (getline(ifs,str)){
        std::cout<<str<<std::endl;
    }
    */
/*
 * 第四种读取方式(不推荐)
 *
    char c;
    while ((c = ifs.get()) != EOF)//EOF end of file
    {
        std::cout << c;
    }
    */
    ifs.close();
}

int main() {
    test02();
    return 0;
}
