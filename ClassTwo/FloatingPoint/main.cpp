#include <iostream>
/*实型：用于表示小数，浮点型变量分为两种
 * 单精度float
 * 双精度double
 * 两者的区别在于表示的有效数字范围不同。
 * float 4字节  7位有效数字
 * double 8字节 15~16位有效数字
*/
//默认情况下，输出一个小数会显示出6位有效数字
int main() {
    float f1 = 3.1415926f; //如果不加f，则默认为double类型，会自动转换为float类型，则多了一步转换
    std::cout << "f1 = " << f1 << std::endl;
    double d1 = 3.1415926;
    std::cout << "d1 = " << d1 << std::endl;
    //统计float和double占用的内存空间
    std::cout << "float 占用内存空间为： " << sizeof(float) << std::endl;
    std::cout << "double 占用内存空间为： " << sizeof(double) << std::endl;
    //科学技术法
    float f2=3e2;//3*10^2
    std::cout<<"f2 = "<<f2<<std::endl;
    float f3=3e-2;//3*0.1^2
    std::cout<<"f3 = "<<f3<<std::endl;

    return 0;
}
