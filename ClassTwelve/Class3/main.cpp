#include <iostream>

/* struct和class的区别
 * C++中struct和class唯一的区别就在于默认的访问权限不同
 * 区别：
 * （1）struct默认权限为公共
 * （2）class 默认权限为私有
 */

class c1{
    int m_A;//默认权限 私有
};

struct c2{
    int m_A;//默认权限 公共
};


int main() {
    c1 person;
//    person.m_A;//默认为私有，不可访问
    c2 person2;
    person2.m_A=100;//默认为公共，可以访问
    return 0;
}
