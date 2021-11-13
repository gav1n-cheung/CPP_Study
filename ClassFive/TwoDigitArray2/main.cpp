#include <iostream>

/* 二维数组名称
 * 作用：
 * （1）查看二维数组所占内存空间
 * （2）获取二维数组首地址
 */
int main() {
    //查看内存空间
    int arr[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };
    std::cout<<"二维数组占用内存空间为："<< sizeof(arr)<<std::endl;
    std::cout<<"二维数组第一行占用内存空间为："<< sizeof(arr[0])<<std::endl;
    std::cout<<"二维数组第一个元素占用内存空间为："<< sizeof(arr[0][0])<<std::endl;
    std::cout<<"二维数组的行数为："<< sizeof(arr)/sizeof (arr[0])<<std::endl;
    std::cout<<"二维数组的行数为："<< sizeof(arr[0])/sizeof (arr[0][0])<<std::endl;

    //查看二维数组首地址
    std::cout<<"二维数组首地址为："<<arr<<std::endl;
    std::cout<<"二维数组第一行数据首地址为："<<arr[0]<<std::endl;
    std::cout<<"二维数组第二行数据首地址为："<<arr[1]<<std::endl;
    std::cout<<"二维数组第一个元素首地址为："<<&arr[0][0]<<std::endl;
    std::cout<<"二维数组第二个元素首地址为："<<&arr[0][1]<<std::endl;


    return 0;
}
