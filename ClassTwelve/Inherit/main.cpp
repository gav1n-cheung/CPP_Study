#include <iostream>

/* 继承
 * 继承是面向对象三大特性之一
 * 有些类与类之间存在特殊的关系，定义某些类时，下级别的成员除了拥有上一级的共性，还有自己的特性
 * 这个时候我们可以考虑利用继承的技术，减少重复代码
 *
 * 优点：减少重复的代码
 * 语法： class 子类:继承方式 父类
 * 子类也称为派生类
 * 父类也称为基类
 * 子类中的成员，包含两大部分：
 * 一类是基类继承过来的，一类是自己增加的成员
 * 从基类继承过来的表现其共性，而新增的成员体现了其个性
 */

//普通实现页面
//Java页面
/*class Java {
public:
    void header() {
        std::cout << "首页、公开课、登录、注册....(公共头部)" << std::endl;
    }

    void footer() {
        std::cout << "帮助中心、交流合作、站内地图...(公共底部)" << std::endl;
    }

    void left() {
        std::cout << "Java、Python、C++、....(公共分类)" << std::endl;
    }

    void content() {
        std::cout << "JAVA学科视频" << std::endl;
    }
};

class Python {
public:
    void header() {
        std::cout << "首页、公开课、登录、注册....(公共头部)" << std::endl;
    }

    void footer() {
        std::cout << "帮助中心、交流合作、站内地图...(公共底部)" << std::endl;
    }

    void left() {
        std::cout << "Java、Python、C++、....(公共分类)" << std::endl;
    }

    void content() {
        std::cout << "python学科视频" << std::endl;
    }
};*/

//继承实现
class BasePage{
public:
    void header() {
        std::cout << "首页、公开课、登录、注册....(公共头部)" << std::endl;
    }

    void footer() {
        std::cout << "帮助中心、交流合作、站内地图...(公共底部)" << std::endl;
    }

    void left() {
        std::cout << "Java、Python、C++、....(公共分类)" << std::endl;
    }
};

class Java: public BasePage{
public:
    void content() {
        std::cout << "JAVA学科视频" << std::endl;
    }
};
class Python: public BasePage{
public:
    void content() {
        std::cout << "Python学科视频" << std::endl;
    }
};


void test01() {
    Java ja;
    std::cout << "Java下载视频页面如下：" << std::endl;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    std::cout<<"-------------------------------------"<<std::endl;
    Python py;
    std::cout << "Python下载视频页面如下：" << std::endl;
    py.header();
    py.footer();
    py.left();
    py.content();
}

int main() {
    test01();
    return 0;
}
