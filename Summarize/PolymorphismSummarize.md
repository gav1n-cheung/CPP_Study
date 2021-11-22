## 多态
### 多态的基本概念
多态是C++面向对象的三大特性之一
多态分为两类：
* 静态多态：函数重载和运算符重载属于静态多态，复用函数名
* 动态多态：派生类和虚函数实现运行时多态
静态多态和动态多态区别：
* 静态多态的函数地址早绑定 - 编译阶段确定函数地址
* 动态多态的函数地址晚绑定 - 运行阶段确定函数地址

动态多态的满足条件：
* 有继承条件
* 子类要重写父类的虚函数。（重写：两个函数返回值的类型、函数的名称和参数列表都相同才叫重写）

### 纯虚函数和抽象类
在多态中，通常父类中虚函数的实现是毫无意义的，主要作用就是调用子类重写的内容，因此可以将虚函数改写为纯虚函数
```
纯虚函数语法：virtual 返回值类型 函数名{参数列表}=0
```
当类中有了纯虚函数，这个类也被称为抽象类
抽象类特点：
* 无法实例化对象
* 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
  
### 虚析构和纯虚析构
多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数
```
 解决方法：将父类中的析构函数改为虚析构或者纯虚析构
```  
虚析构和纯虚析构共性：
* 可以解决父类指针释放子类对象
* 都需要有具体的抽象实现

虚析构和纯虚析析构区别：
* 如果是纯虚析构，该类属于抽象类，无法实例化对象

```
虚析构语法：virtual ~类名()
虚析构语法：virtual ~类民()=0; 外部实现--类名：：~类名(){实现}
```
总结：
* 虚析构和纯虚析构就是用来解决通过父类指针释放子类对象
* 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
* 拥有纯虚析构函数的类也属于抽象类
  