#include <iostream>

/* 二维数组
 * 二维数组定义的四种方式：
 * （1）数据类型 数组名[行数][列数]
 * （2）数据类型 数组名[行数][列数]={{数据1，数据2},{数据3，数据4}}
 * （3）数据类型 数组名[行数][列数]={数据1，数据2,数据3，数据4}
 * （4）数据类型 数组名[][列数]={数据1，数据2，数据3，数据4}
 * 以上方法的第二种更为直观，可以提高代码可读性
 */
int main() {
    //定义方法一
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << std::endl;
        }
    }
    //定义方法二
    int arr2[2][3] = {{1, 2, 3},
                      {4, 5, 6}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout<<arr2[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    //定义方法三
    int arr3[2][3]={1,2,3,4,5,6};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout<<arr3[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    //定义方法四
    int arr4[][3]={1,2,3,4,5,6};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout<<arr4[i][j]<<"\t";
        }
        std::cout<<"\n";
    }


    return 0;
}
