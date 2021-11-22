#include <iostream>

/* 递增运算符重载
 * 通过重载递增运算符，可以实现自己的整型
 * 前置递增返回引用，后置递增返回值
 */

class MyInteger {
    friend std::ostream &operator<<(std::ostream &cout, MyInteger p);

public:
    MyInteger();


    /* 对前置++和后置++的返回值类型做出总结：
     *
     *
     *
     */




    //重载前置++运算符
    //如果返回的不是引用，则做连续运算时操作的不是同一个对象了
    //返回引用就是为了一直对一个对象进行操作

    MyInteger& operator++() {
        m_int++;
        return *this;
    }

    //重载后置++运算符,int代表占位参数，可以用于区分前置和后置递增,
    //由于intNum是一个局部变量，则返回一个值，不能返回引用；
    //前置递增返回引用，后置递增返回值
    MyInteger operator++(int) {
        //先记录当时结果
        MyInteger intNum=*this;
        //后递增
        m_int++;
        //最后将记录的结果做返回
        return intNum;
    }

private:
    int m_int;
};

MyInteger::MyInteger() : m_int(0) {}


std::ostream &operator<<(std::ostream &cout, MyInteger p) {
    cout << p.m_int;
    return cout;
}

void test01() {
    MyInteger myint;
    std::cout << myint << std::endl;
    std::cout << ++(++myint) << std::endl;//返回引用结果为2，返回不是引用结果为2
    std::cout << myint << std::endl;
    //返回引用结果为2，返回不是引用结果为1，如果不返回引用，则经过一次操作后得到的就是另外一个对象了，进行第二次++并非myint了
}
void test02(){
    MyInteger p;
    std::cout<<p<< std::endl;
    std::cout<<(p++)<< std::endl;
    std::cout<<p<< std::endl;
}

int main() {
    test01();
    test02();
    return 0;
}
