## C++数据类型总结  

###  使用sizeof()来统计变量的内存大小
```
sizeof(bool)        1字节
sizeof(char)        1字节
sizeof(short)       2字节
sizeof(int)         4字节
sizeof(long)        4字节
sizeif(long long)   8字节
bool=char<short<int<=long<long long 
```

### 定义字符串的两种方式

```
#include<string>

//C++风格的，C++版本为14，不需要添加string，只需添加std::
std::string s1="";
//C风格的
char str[]="";
//a对应ASCII编码为97,
//b对应为65
```

### 从键盘获取输入
```
cin>>对象 即可，得到的数据类型就是对象的类型
//需要注意的是，在CPP中，bool类型的值==0时为false，其余均为true
```

### 转义字符
```
\n 换行
\\ 输出\
\t 水平制表，补充至8个字符
```

### 浮点数
```
float   单精度 4字节 7位有效数字,赋值后需要添加f，防止编译器自动识别为double类型，产生类型转换
double  双精度 8字节 15-16位有效数字
两者的区别在于表示的有效数字范围不同
默认情况下，输出一个小数会显示出6位有效数字
```

### 科学计数法
```
float num=3e2;//3*10^2
float num2=3e-2;//3*(0.1)^2
```