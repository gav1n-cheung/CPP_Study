#include <iostream>

/* 结构体数组
 * 作用：将自定义的结构体放入到数组中方便维护
 * 语法：struct 结构体名 数组名[元素个数]={{},{},....{}}
 */
//创建结构体
struct Student {
    std::string name;
    int age;
    int score;
};

int main() {
    //创建结构体对象
    Student stuArr[2] = {{"cheung", 19, 100},
                         {"zhang",  20, 100}};
    //赋值或修改对象的属性
    stuArr[1].age=100;
    //遍历结构体数组
    for (int i = 0; i < 2; ++i) {
        std::cout<<stuArr[i].age<<std::endl;
    }
    return 0;
}
