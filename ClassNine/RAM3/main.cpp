#include <iostream>

/* 堆区
 * 由程序员分配释放，若程序员不释放，则程序结束后由操作系统回收
 * 在C++中主要利用ner在堆区开辟内存
 */

int *func() {
    //利用new关键字可以将数据开辟到堆区,使用new关键字创建数字会自动返回一个地址，这里我们用指针进行接受
    //与直接创建数据不同，直接创建数据在栈区开辟数据，利用取址符进行返回，也是返回的栈区中的一个地址，随着编译器的自动回收
    //该地址指向的栈区的数据也被回收掉了。而new创建的堆区对象不会被自动回收，因此通过栈区的一个新建指针来给到main函数中的一个指针，
    //则main函数中的指针指向的还是堆区的一个地址。
    //总的来说，通过局部变量指针来返回地址是没问题的，但是如果是返回的是指向堆区的地址，因为不会被自动回收则不会出错；
    //而如果返回的是指向栈区的地址，会因为自动回收而报错
    int *p = new int(10);//该指针本质上也是一个局部变量，放在栈上，而指针指向的数据是在堆区中
    return p;
}


int main() {
    int *p=func();
    std::cout<<*p<<std::endl;
    std::cout<<*p<<std::endl;

    return 0;
}
