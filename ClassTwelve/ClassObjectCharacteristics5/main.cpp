#include <iostream>

/* 深拷贝和浅拷贝
 * 浅拷贝：简单地赋值拷贝操作
 * 深拷贝：在堆区重新申请空间，进行拷贝操作
 * 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
 */

class Person {
public:
    Person() {
        std::cout << "默认构造函数" << std::endl;
    }

    Person(int age, int height) {
        m_height = new int(height);
        m_age = age;
        std::cout << "有参构造函数" << std::endl;
    }

    //自己写一个拷贝构造函数来解决浅拷贝带来的堆区内存重复释放问题
    Person(const Person &p) {
        std::cout << "拷贝构造函数" << std::endl;
        m_age = p.m_age;
//        m_height = p.m_height;//编译器进行浅拷贝的操作
        //深拷贝操作
        m_height = new int(*p.m_height);
    }

    ~Person() {
        //将堆区开辟的数据做释放操作
        //使用浅拷贝会导致堆区内存重复释放报错
        if (m_height != NULL) {
            delete m_height;
            m_height = NULL;
        }
        std::cout << "析构函数" << std::endl;
    }

    int m_age;
    int *m_height;
};

void test01() {
    Person p1(18, 160);
    std::cout << "p1的年龄：" << p1.m_age << "  身高为:" << *p1.m_height << std::endl;
    Person p2(p1);
    std::cout << "p2的年龄：" << p2.m_age << "  身高为:" << *p2.m_height << std::endl;
}

int main() {
    test01();
    return 0;
}
