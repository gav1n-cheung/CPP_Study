#include <iostream>
/*嵌套循环
 * 作用：在循环体中再嵌套一层循环，解决一些实际问题
 */
int main() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}
