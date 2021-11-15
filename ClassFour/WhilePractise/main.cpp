#include <iostream>
#include <ctime>
/* 设定案例：随机生成一个数
 * 用户进行猜测，如果猜的大于答案，则输出猜大了，
 * 如果猜的小于答案，则输出猜小了
 * 如果猜对了，输出猜对了
 */

int main() {
    //系统生成随机数,直接使用rand会导致伪随机，如果要实现效果比较理想的随机数，则
    //需要添加随机数种子，利用当前系统时间来生成随机数，防止每次随机数都一样
    srand((unsigned int ) time(NULL));

    int result = rand() % 100 + 1;//rand()%100用于生成0~99的随机数
    int solution = 0;
    while (true) {
        std::cout << "请输入猜测：" << std::endl;
        std::cin >> solution;
        if (solution > result) { std::cout << "猜大了" << std::endl; }
        else if (solution < result) { std::cout << "猜小了" << std::endl; }
        else {
            std::cout << "猜对了" << std::endl;
            break;
        }
    }
    return 0;
}
