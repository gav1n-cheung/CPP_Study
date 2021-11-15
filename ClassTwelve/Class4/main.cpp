#include <iostream>

/* 成员属性设置为私有
 * 优点1:将所有成员属性设置为私有，可以自己控制读写权限
 * 优点2:对于写权限，我们可以检测数据的有效性
 */

class Person {
public:
    void setName(std::string name) {
        p_Name = name;
    }

    std::string getName() {
        return p_Name;
    }

    int getAge() {
        p_Age = 0;
        return p_Age;
    }

    void setLover(std::string lover) {
        p_Lover = lover;
    }

    void setAge(int age) {
        if (age < 0 || age > 150) {
            std::cout << "输入年龄有误" << std::endl;
        } else {
            p_Age = age;
        }
    }


private:
    //姓名 可读可写
    std::string p_Name;
    //年龄  只读
    int p_Age;
    //情人 只写
    std::string p_Lover;
};

int main() {
    Person person;
    person.setName("cheung");
    std::cout << person.getName() << std::endl;
    std::cout << person.getAge() << std::endl;
    person.setLover("gavin");
    std::cout << "请输入年龄信息" << std::endl;
    int age = 0;
    std::cin >> age;
    person.setAge(age);
    return 0;
}
