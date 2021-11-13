#include <iostream>

/* 数组元素逆置
 * 声明一个5元素的数组，将元素逆置
 */
int main() {
/*    int arrayForward[5];
    int arrayBack[5];
    for (int i = 0; i < 5; ++i) {
        std::cout<<"请输入第"<<i+1<<"个元素"<<std::endl;
        std::cin>>arrayForward[i];
    }
    for (int i = 0; i < 5; ++i) {
        arrayBack[i]=arrayForward[5-(i+1)];
        std::cout<<arrayBack[i]<<std::endl;
    }*/
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int demo = 0;
    while (start < end) {
        demo = arr[start];
        arr[start] = arr[end];
        arr[end] = demo;
        start++;
        end--;
    }
    for (int i : arr) {
        std::cout << i << std::endl;
    }
    return 0;
}
