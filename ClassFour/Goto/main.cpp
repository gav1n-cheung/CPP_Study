#include <iostream>
/*goto语句
 * 作用：可以无条件跳转语句
 * 语法：goto 标记;
 * 解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
 */
int main() {
    //goto语句

    std::cout<<"1***"<<std::endl;
    std::cout<<"2***"<<std::endl;
    goto FLAG;
    std::cout<<"3***"<<std::endl;
    std::cout<<"4***"<<std::endl;
    std::cout<<"5***"<<std::endl;
    FLAG:
    std::cout<<"6***"<<std::endl;

    return 0;
}
