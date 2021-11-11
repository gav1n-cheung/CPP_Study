#include <iostream>

/*C/C++支持最基本的三种程序结构：
 * （1）顺序结构：程序按照顺序执行，不发生跳转
 * （2）选择结构：依据条件是否满足，有选择的执行相应功能
 * （3）循环结构：依据条件是否满足，循环多次执行某段代码
 */
/*选择结构
 * if:执行满足条件的语句
 *（1）单行格式if语句 if(条件){条件满足执行的语句}
 *（2）多行格式if语句 if(条件){条件满足执行的语句}else{条件不满足执行的语句}；
 *（3）多条件的if语句
 */
int main() {
    //单行if判断语句：
    //设定案例一：用户输入一个分数，如果分数大于600，则认为考上一本，并输出恭喜；
    //注意事项，if条件后不要加分号
/*    int source=0;
    std::cout<<"输入您的高考分数"<<std::endl;
    std::cin>>source;
    if (source>= 600){
        std::cout<<"您的分数为:"<<source<<"\t恭喜考上一本"<<std::endl;
    }*/


    //多行if判断语句：
    //设定案例二：用户输入一个分数，如果分数大于600，则认为考上一本，并输出恭喜；否则输出没考上一本
/*
    int source=0;
    std::cout<<"输入您的高考分数"<<std::endl;
    std::cin>>source;
    if (source>= 600){
        std::cout<<"您的分数为:"<<source<<"\t恭喜考上一本"<<std::endl;
    }else{
        std::cout<<"您的分数为："<<source<<"\t很抱歉您的分数不够"<<std::endl;
    }
*/


    //多条件的if语句
    //设定案例三：输入成绩>600,视为考上一本大学，再屏幕输出;>500，视为考上二本;>400，视为考上三本;<=400,视为未考上本科
/*
    int source=0;
    std::cout<<"请输入您的高考分数"<<std::endl;
    std::cin>>source;
    if (source>600){
        std::cout<<"您的分数为： "<<source<<"\t恭喜考上一本"<<std::endl;
    } else if (source<=600&&source>500){
        std::cout<<"您的分数为： "<<source<<"\t恭喜考上二本"<<std::endl;
    } else if(source<=500&&source>400){
        std::cout<<"您的分数为： "<<source<<"\t恭喜考上三本"<<std::endl;
    }else{
        std::cout<<"您的分数为： "<<source<<"\t未考上本科，请再接再厉"<<std::endl;
    }
*/


    //嵌套if语句
    /*设定案例四：
     * 提示用户输入一个高考考试分数，根据分数做如下判断
     * 分数如果大于600视为考上一本，大于500分考入二本，大于400考上三本，其余视为未考上本科
     * 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大
     */
    int source=0;
    std::cout<<"输入您的高考成绩"<<std::endl;
    std::cin>>source;
    if (source>600){
        if (source>700){std::cout<<"您的分数为: "<<source<<"\t考上了北大";}
        else if (source>650){std::cout<<"您的分数为: "<<source<<"\t考上了清华";}
        else {std::cout<<"您的分数为: "<<source<<"\t考上了人大";}
    } else if (source>500){
        std::cout<<"您的分数为："<<source<<"\t考上了二本"<<std::endl;
    } else if (source>400){
        std::cout<<"您的分数为："<<source<<"\t考上了三本"<<std::endl;
    } else{
        std::cout<<"您的分数为："<<source<<"\t未考上本科"<<std::endl;
    }

    return 0;
}
