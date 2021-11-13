#include <iostream>

/* 指针和数组
 * 利用指针访问数组中的元素
 */
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "数组第一个元素为：" << arr[0] << std::endl;

    int *p = arr;//arr就是数组的首地址
    std::cout<<"利用指针访问数组第一个元素："<<*p<<std::endl;
//    std::cout<<"利用指针访问数组第二个元素："<<*(++p)<<std::endl;//让指针向后偏移4个字节

    //利用指针遍历数组
    for (int i = 0; i < 10; ++i) {
        std::cout<<"数组第"<<i+1<<"元素为"<<*(p+i)<<std::endl;
    }
    return 0;
}
