//
// Created by cheung on 11/20/21.
//
#include <iostream>
#include <fstream>

#ifndef PRATISESYSTEM2_STAFF_H
#define PRATISESYSTEM2_STAFF_H

//员工基类
class Staff {
public:


    virtual ~Staff(){std::cout<<"基类析构函数"<<std::endl;}

    virtual void Duties() = 0;

    virtual void addStaff() = 0;

    static void writeInDoc(Staff *staff);

    static void printStaffInfo();


    Staff *staffSum[0];
    int staffNum;
    std::string staffName;
    std::string staffJob;
};

//普通员工子类
class CommonStaff : public Staff {
public:
    CommonStaff(int num, std::string name, std::string job);

    void Duties();

    void addStaff();

protected:
    int numOfCommonStaff;
};

//经理子类
class ManagerStaff : public Staff {
public:
    ManagerStaff(int num, std::string name, std::string job);

    void Duties();

    void addStaff();

};

//老板子类
class BossStaff : public Staff {
public:
    BossStaff(int num, std::string name, std::string job);

    void Duties();

    void addStaff();

};


#endif //PRATISESYSTEM2_STAFF_H
