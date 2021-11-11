#include <iostream>

//练习案例：三只小猪称体重--有三只小猪ABC，分别输入三只小猪的体重，判断哪一只最重？
int main() {
    int weightOfPigPre = 0;
    int weightOfPigNow = 0;
    int flag = 0;
    for (int i = 0; i < 3; ++i) {
        std::cout << "请输入第" << i + 1 << "只小猪的重量" << std::endl;
        std::cin >> weightOfPigNow;
        if (weightOfPigNow > weightOfPigPre) {
            weightOfPigPre = weightOfPigNow;
            flag = i;
        }
    }
    std::cout << "第" << flag + 1 << "只小猪最重，其体重为" << weightOfPigPre << std::endl;
    return 0;
}
