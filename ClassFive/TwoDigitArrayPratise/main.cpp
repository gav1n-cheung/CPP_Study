#include <iostream>

/* 二维数组应用案例
 * 考试成绩统计：
 * 案例描述：有三名同学(张三、李四、王五)如下表，请分别输出三名同学的总成绩
 *      语文  数学 英语
 * 张三  100  100 100
 * 李四  90   50  100
 * 王五  60   70  80
 */
int main() {
    int score[3][3] = {{100, 100, 100},
                       {90,  50,  100},
                       {60,  70,  80}};
    int sum[3]={0,0,0};
    for (int i = 0; i < sizeof(score)/sizeof(score[0]); ++i) {
        for (int j = 0; j < sizeof(score[0])/ sizeof(score[0][0]); ++j) {
            sum[i]+=score[i][j];
        }
    }
    for (int i = 0; i < sizeof(sum)/ sizeof(sum[0]); ++i) {
        std::cout<<sum[i]<<std::endl;
    }
    return 0;
}
