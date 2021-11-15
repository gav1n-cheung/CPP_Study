#include <iostream>
/*实例：乘法口诀表
 * 使用嵌套循环
 */
int main() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < i+1; ++j) {
            std::cout<<j<<"*"<<i<<"="<<i*j<<"\t";
        }
        std::cout<<"\n";
    }
    return 0;
}
