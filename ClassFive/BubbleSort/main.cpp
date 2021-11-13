#include <iostream>

/* 冒泡排序
 * 作用：最常用的排序算法，对数组内元素进行排序
 * 1、比较相邻的元素，如果第一个比第二个大，则交换
 * 2、对每一对相邻元素都做同样的工作，执行完毕后，找到第一个最大值
 * 3、重复以上的步骤，每次比较次数-1，直到不需要比较了
 */
int main() {
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    //冒泡排序实现升序排列--自己实现方法
/*
    int index = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int temp = 0;
    while (end != 0) {
        while (index < end) {
            if (arr[index] > arr[index + 1]) {
                temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
            }
            index++;
            temp = 0;
        }
        index = 0;
        end--;
    }
*/
    //冒泡排序实现升序排列--课程方法
    /* 排序总轮数 = 元素个数 - 1；
     * 每轮对比次数 = 元素个数 - 排序轮数-1；
     */

    //开始冒泡排序
    //总共的排序轮数为元素个数-1
    for (int i = 0; i < 9-1; ++i) {
        //内层循环对比 次数 = 元素个数-当前轮数-1
        for (int j = 0; j < 9-i-1; ++j) {
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


    for (int i = 0; i < 9; i++) {
        std::cout << arr[i] << std::endl;
    }


    return 0;
}
