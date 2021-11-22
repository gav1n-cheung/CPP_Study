#include <iostream>

/* C++类还会添加另外一个函数
 * operator=，对属性进行拷贝
 */

class Peron {
public:
    Peron(int age) {
        m_Age = new int(age);
    }

    ~Peron() {
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }

    }

    //重载赋值运算符
    Peron& operator=(Peron &p1) {
        //应该先判断是否有属性在堆区，如果有，先释放干净
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
        //深拷贝操作
        m_Age = new int(*p1.m_Age);
        //返回自身本身
        return *this;
    }

    int *m_Age;
};

void test01() {
    Peron p1(19);
    Peron p2(10);
    Peron p3(20);
    p3 = p2 = p1;//赋值操作
    std::cout << *p1.m_Age << std::endl;
    std::cout << *p2.m_Age << std::endl;
    std::cout << *p3.m_Age << std::endl;
}

int main() {
    test01();
/*    int a1 = 10;
    int a2 = 20;
    int a3 = 30;
    a1=a2=a3;
    std::cout<<"a1 = "<<a1<<std::endl;*/

    return 0;
}
