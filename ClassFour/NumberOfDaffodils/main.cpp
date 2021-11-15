#include <iostream>

/*水仙花数
 * 是指一个三位数，他的每个位上的数字的3次幂之和等于它本身
 */
int main() {
    int num = 100;
    int hundreds = 0;
    int tens = 0;
    int ones = 0;
    do {
        hundreds=num/100;
        tens=(num/10)%10;
        ones=num%10;
        if ((hundreds*hundreds*hundreds+tens*tens*tens+ones*ones*ones)==num){std::cout<<num<<"为水仙花数"<<std::endl;}
        num++;
//        std::cout<<"hundreds:"<<hundreds<<"\ttens:"<<tens<<"\tones:"<<ones<<std::endl;
    } while (num<1000);
    return 0;
}
