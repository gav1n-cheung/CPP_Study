## 内存分配

### 内存分区模型
<a href="https://ibb.co/Ybk13Rd"><img src="https://i.ibb.co/jHMQT6w/drawio-1.png" alt="drawio-1" border="0"></a>
```
C++程序在执行时，将内存大致分为4个区域
（1）代码区：存放函数体的二进制代码，由操作系统进行管理
（2）全局区：存放全局变量和静态变量以及常量
（3）栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
（4）堆区：由程序员分配和释放，若程序员不释放，程序结束后由操作系统回收
内存四区意义：不同区域存放数据，赋予不同的生命周期，更大的编程灵活性
```
```
程序运行前：
未执行程序前分为两个区域：
    代码区：存放CPU执行的机器指令
        代码区是**共享**的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
        代码区是**只读**的，防止程序意外的修改指令
    全局区：
        **全局变量**和**静态变量(static)**存放在此
        全局区还包含了**常量**区，字符串常量和其他常量也存放在此(const修饰的全局变量和字符串常量)
        该区域的数据在程序结束后由操作系统释
```
[define/static/const的区别](https://gist.github.com/wanyakun/7c9a9305cece0f7aaf276440ddc4d9a9)
```
他们没有联系值有区别：
definde:    预处理层面上的替换
static:     变量的作用域控制
const:      变量的访问控制(只读)
```

### 栈区
```
由编译器自动分配释放，存放函数的参数值，局部变量等
注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器释放
形参数据也会放在堆区
```

### 堆区
```
由程序员分配释放，若程序员不释放，则程序结束后由操作系统回收
C++中主要利用new在堆区中开辟内存
```

```
利用new关键字可以将数据开辟到堆区，使用new关键字创建数字会自动返回一个地址，我们使用指针进行接收  

int *p=new int(10);//开辟堆区数据并用指针接收，该指针可以返回到main而不出错
int num=10;
int *p=&num;//返回该指针到main会导致错误，它位于栈区

与直接创建数据不同，直接创建数据在栈区开辟数据，利用取址符进行返回，也是返回的栈区的一个地址，随着编译器的自动回收，该地址指向的栈区的数据也被回收掉了。  
而new创建的堆区对象不会被自动回收，因此通过栈区的一个新建指针来给到main函数的一个指针，则mian函数中的指针指向的还是堆区的一个地址。
总的来说，通过局部变量指针来返回地址是可行的，但是前提是该指针指向的是new开辟的堆区数据，不会被系统自动回收，不会出错。而如果返回的是栈区的地址，即不是new开辟的局部变量，就会因为自动回收而报错。
```

### new开辟堆区和delete释放堆区
```
int *p=new int(19);
delete p;//释放内存

int *p=new int[10];
delete []p;//释放堆区数组的内存
```