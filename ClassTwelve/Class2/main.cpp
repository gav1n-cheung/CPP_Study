#include <iostream>

/* 封装意义二：
 * 类在设计时，可以把属性和行为放在不同的权限下，加以控制
 * 访问权限有三种：
 * 1、public     公共权限  成员 类内可以访问，类外可以访问
 * 2、protected  保护权限  成员 类内可以访问，类外不可以访问 子类也可以访问父类中的保护内容
 * 3、private    私有权限  成员 类内可以访问，类外不可以访问 子类不可以访问父类中的私有内容
 */

class Person {
public:
    std::string name;
protected:
    std::string car;
private:
    int password;

public:
    void func() {
        name = "cheung";
        car = "拖拉机";
        password = 241243;
    }
};


int main() {
    Person p1;
    p1.name="gavin";
//    p1.car="奔驰";//保护权限内容在类外不可访问
//p1.password=123123;//私有权限类外不可以访问
    return 0;
}
