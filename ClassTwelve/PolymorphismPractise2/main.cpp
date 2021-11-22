#include <iostream>

/* 电脑组装
 * 案例描述：
 * 电脑主要组成部件为CPU(用于计算),显卡(用于显示),内存条(用于存储)
 * 将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如intel和lenovo
 * 创建电脑类提供让电脑工作地函数，并且调用每个零件工作的接口
 * 测试时组装三台不同的电脑进行工作
 */

class CPU {
public:
    virtual void calculate() = 0;
};

class GPU {
public:
    virtual void display() = 0;
};

class RAM {
public:
    virtual void storage() = 0;
};


class IntelCpu : public CPU {
public:
    void calculate() {
        std::cout << "intel cpu 正在计算中" << std::endl;
    }
};

class IntelGpu : public GPU {
public:
    void display() {
        std::cout << "intel gpu 正在显示中" << std::endl;
    }
};

class IntelRam : public RAM {
public:
    void storage() {
        std::cout << "intel ram 正在存储中" << std::endl;
    }
};

class LenovoCpu : public CPU {
public:
    void calculate() {
        std::cout << "Lenovo cpu 正在计算中" << std::endl;
    }
};

class LenovoGpu : public GPU {
public:
    void display() {
        std::cout << "Lenovo gpu 正在显示中" << std::endl;
    }
};

class LenovoRam : public RAM {
public:
    void storage() {
        std::cout << "Lenovo ram 正在存储中" << std::endl;
    }
};

class Computer {
public:
    Computer(CPU *cpu, GPU *gpu, RAM *ram);
    void doWork(){
        cpu->calculate();
        gpu->display();
        ram->storage();
        std::cout<<"\n";
    };
    virtual ~Computer(){
        if (cpu!=NULL){delete cpu;cpu=NULL;}
        if (gpu!=NULL){delete gpu;gpu=NULL;}
        if (ram!=NULL){delete ram;ram=NULL;}
    }
private:
    CPU *cpu;
    GPU *gpu;
    RAM *ram;
};

Computer::Computer(CPU *cpu, GPU *gpu, RAM *ram) {
    this->cpu=cpu;
    this->gpu=gpu;
    this->ram=ram;
}



void test01(){
    Computer *c=new Computer(new IntelCpu,new IntelGpu,new IntelRam);
    Computer *c1=new Computer(new IntelCpu,new LenovoGpu,new IntelRam);
    Computer *c2=new Computer(new IntelCpu,new LenovoGpu,new LenovoRam);
    c->doWork();
    c1->doWork();
    c2->doWork();
    delete c;
    delete c1;
    delete c2;
}
int main() {
    test01();
    return 0;
}
