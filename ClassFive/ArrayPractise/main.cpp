#include <iostream>

/* 五只小猪称体重
 * 案例描述：在一个数组中记录了五只小猪的体重，找出并打印最重的小猪体重
 */
int main() {
    int weights[5];
    int result;
    int index;
    for (int i = 0; i < 5; ++i) {
        std::cout<<"请输入第"<<i+1<<"只小猪的体重"<<std::endl;
        std::cin>>weights[i];
    }
    for (int i = 0; i < 5; ++i) {
        std::cout<<"第"<<i+1<<"只小猪的体重为"<<weights[i]<<std::endl;
        if (weights[i]>result) {result=weights[i];index=i+1;}
    }
    std::cout<<"第"<<index<<"只小猪最重，体重为"<<result<<std::endl;

    return 0;
}
