#include <iostream>

/* 多态案例 制作饮品
 * 案例描述：
 * 制作饮品的大致流程为:煮水-冲泡-倒入杯中-加入辅料
 *
 * 使用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
 */

class Drink {
public:
    void boilWater() {
        std::cout << "煮水" << std::endl;
    }

    virtual void brew() = 0;

    void pourWater() {
        std::cout << "倒水" << std::endl;
    }

    virtual void addMaterial() = 0;

    void makeDrinking() {
        boilWater();
        brew();
        pourWater();
        addMaterial();
    }

};

class Coffee : public Drink {
public:
    void brew() {
        std::cout << "冲泡咖啡" << std::endl;
    }

    void addMaterial() {
        std::cout << "添加糖和牛奶" << std::endl;
    }
};

class Tea : public Drink {
public:
    void brew() {
        std::cout << "冲泡茶叶" << std::endl;
    }

    void addMaterial() {
        std::cout << "添加柠檬" << std::endl;
    }
};

void doWork(Drink *abs) {
    abs->makeDrinking();
    delete abs;
}

void test01() {
    doWork(new Coffee);
}

void test02() {
    doWork(new Tea);
}


int main() {
    test01();
    std::cout << "\n";
    test02();
    return 0;
}
