#include <iostream>

/* 案例描述：
 * 设计一个英雄的结构体，包括成员姓名、年龄、性别；
 * 创建结构体数组，数组中存放五名英雄，根据冒泡排序的算法，
 * 将数组中的英雄按照年龄进行升序排序，最终打印排序后结果
 */
struct hero {
    std::string name;
    int age;
    std::string gender;
};

void bubbleSort(hero *p, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if ((p + j)->age > (p + j + 1)->age) {
                hero temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    hero heroArr[5] = {{"刘备", 23, "男"},
                       {"关羽", 23, "男"},
                       {"张飞", 20, "男"},
                       {"赵云", 22, "男"},
                       {"貂蝉", 19, "女"}};

    int length = sizeof(heroArr) / sizeof(heroArr[0]);
    for (int i = 0; i < length; ++i) {
        std::cout << "name: " << heroArr[i].name << "\tage: " << heroArr[i].age << "\tgender: " << heroArr[i].gender
                  << std::endl;
    }
    bubbleSort(heroArr, length);
    for (int i = 0; i < length; ++i) {
        std::cout << "name: " << heroArr[i].name << "\tage: " << heroArr[i].age << "\tgender: " << heroArr[i].gender
                  << std::endl;
    }
    return 0;
}
