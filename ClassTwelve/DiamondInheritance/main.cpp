#include <iostream>
/* 菱形继承
 * 菱形继承概念：
 * 两个派生类继承同一个基类
 * 又有某个类同时继承两个派生类
 * 这种继承被称为菱形继承，或者钻石继承
 */

//动物类
class Animal {
public:
    int m_age;
};

//利用虚继承来解决菱形继的问题,在继承之前加上virtual变为虚继承
//Animal类称为 虚基类
//羊类
class Sheep : virtual public Animal {
};

//驼类
class Tuo : virtual public Animal {
};

//羊驼类
class SheepTuo : public Sheep, public Tuo {

};

void test01() {
    SheepTuo st;
    st.Sheep::m_age = 18;
    st.Tuo::m_age = 28;
    //当产生菱形继承时，产生两份父类拥有的相同数据，需要加以作用域来区分
    std::cout << " st.Sheep::m_age = " << st.Sheep::m_age << std::endl;
    std::cout << " st.Tuo::m_age = " << st.Tuo::m_age << std::endl;
    std::cout << "st.m_age = " << st.m_age << std::endl;//虚继承之后，就可以直接访问m_age了
    //但其实这份数据只要一份就够了，菱形继承导致了数据有两份，导致资源浪费
    //使用虚继承之后，不再继承两份数据，而是继承两个指针，两个指针可以通过偏移量找到唯一的数据
    std::cout << sizeof(st) << std::endl;

}

int main() {
    test01();
    return 0;
}
