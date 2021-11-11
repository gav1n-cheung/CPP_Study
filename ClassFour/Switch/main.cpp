#include <iostream>

/* switch语句
 * 执行多条件分支语句
 * 语法：
 * switch(表达式){
 * case 结果1:执行语句；break;
 * case 结果2:执行语句；break;
 *
 * ...
 *
 * case 结果n:执行语句；break;
 * default:执行语句;break;
 * }
 */
int main() {
    //switch语句
    //给一部电影进行打分
    //10~9 经典
    //8~7 非常好的电影
    //6~5 一般
    //5以下 烂片

    //1、提示用户给电影打分
    //2、用户开始进行打分
    //3、根据用户输入的分数来提示用户最后的结果

    int source=0;
    std::cout<<"请为电影进行评分"<<std::endl;
    std::cin>>source;
    std::cout<<"您打得分数为：\t"<<source<<std::endl;
    //注意事项：如果case内不加break，则会导致判断成功后的所有case都会被执行
    switch (source) {
        case 10:
            std::cout<<"经典电影"<<std::endl;
            break;
        case 9:
            std::cout<<"经典电影"<<std::endl;
            break;
        case 8:
            std::cout<<"好电影"<<std::endl;
            break;
        case 7:
            std::cout<<"好电影"<<std::endl;
            break;
        case 6:
            std::cout<<"一般电影"<<std::endl;
            break;
        case 5:
            std::cout<<"一般电影"<<std::endl;
            break;
        default:
            std::cout<<"烂片"<<std::endl;
            break;
    }
    //if和switch的区别：
    //(1)switch 缺点：判断的时候只能是整型或者字符型，不能是一个区间
    //(2)优点：结构清晰，执行效率高
    return 0;
}
