## 类和对象
```
C++面向对象的三大特性：封装、继承和多态
具有相同属性的对象，可以抽象成为类
```
### 封装
```
封装是C++面向对象的三大特性之一
意义：
（1）将属性和行为作为一个整体，表示事物
（2）将属性和行为加以权限控制

语法：class 类名{访问权限:属性/行为}
```
```
访问权限有三种：
（1）public      公共权限   成员类内可以访问，类外可以访问
（2）protected   保护权限   成员类内可以访问，类外不可以访问，子类可以访问父类中的protected内容
（3）private     私有权限   成员类内可以访问，类外不可以访问，子类不可以访问父类中的private内容

将成员属性设为私有地好处:
将所有成员属性设置为私有,可以自己控制读写权限
对于写权限,我们可以检测数据的有效性
```

```
struct和class的区别：
（1）struct的默认权限为公共
（2）class默认权限为私有
```

