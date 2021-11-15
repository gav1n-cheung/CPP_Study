#include <iostream>

/*案例：敲桌子
 * 从1开始数到100，如果数字个位含有7，或者数字十位包含7，或者该数为数字7的倍数，我们打印敲桌子，
 * 其余数字直接打印输出
 */
int main() {
    int tens = 0;
    int ones = 0;
    for (int i = 1; i < 100; ++i) {
        ones = i % 10;
        tens = i / 10;
        if (ones == 7||tens == 7||i % 7 == 0) { std::cout << i << "\t敲桌子" << std::endl; }
    }
    return 0;
}
