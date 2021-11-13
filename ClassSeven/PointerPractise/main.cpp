#include <iostream>

/* 指针练习案例
 * 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
 */

void sort(int *arr, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr+j+1)=temp;
            }
        }
    }
}

int main() {
    int array[10]={10,9,8,7,6,5,4,3,2,1};
    //在这里传入的是array而非&array是因为数组的变量名就是首地址，而在上一个例子中使用int类型的时使用了&取得地址，在这里是不需要的
    sort(array, sizeof(array)/ sizeof(array[0]));
    for (int i = 0; i < 10; ++i) {
        std::cout<<array[i]<<std::endl;
    }

    return 0;
}
