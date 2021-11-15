#include <iostream>
/*continue语句
 * 再循环语句中，跳过本次循环余下尚未执行的语句，继续执行下一次循环
 */
int main() {
    for (int i = 0; i <= 100; ++i) {
        //奇数输出，偶数不输出
//        if (i%2!=0){
//            std::cout<<i<<std::endl;
//        }
        if (i%2==0){
            continue;
        }
        std::cout<<i<<std::endl;
    }
    return 0;
}
