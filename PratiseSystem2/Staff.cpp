//
// Created by cheung on 11/20/21.
//

#include "Staff.h"

/*Staff::Staff(int num, std::string name, int job) {
    this->staffName=num;
    this->staffNum=num;
    this->staffJob=job;
}*/

//添加员工信息到文件中实现
 void Staff::writeInDoc(Staff *staff) {
    std::fstream ofs;
    ofs.open("Data.md", std::ios::out|std::ios::app);
    ofs << staff->staffNum << "\t" << staff->staffName << "\t" << staff->staffJob<<"\n";
    ofs.close();
}

void Staff::printStaffInfo() {
    std::fstream ifs;
    ifs.open("Data.md",std::ios::in);
    if (!ifs.is_open()){std::cout<<"文件打开失败"<<std::endl;}
    std::string str;
    while (getline(ifs,str)){
        std::cout<<str<<std::endl;
    }
}

//普通员工构造函数实现
CommonStaff::CommonStaff(int num, std::string name, std::string job) {
    this->staffNum = num;
    this->staffName = name;
    this->staffJob = job;
    writeInDoc(this);
}

//普通员工任务实现
void CommonStaff::Duties() {
    std::cout << "完成老板交给的任务" << std::endl;
}

//添加普通员工实现
void CommonStaff::addStaff() {
    numOfCommonStaff++;
}

//经理构造函数实现
ManagerStaff::ManagerStaff(int num, std::string name, std::string job) {
    this->staffNum = num;
    this->staffName = name;
    this->staffJob = job;
    writeInDoc(this);

}

//经理人员实现
void ManagerStaff::Duties() {
    std::cout << "完成老板交给的任务，下发任务给员工" << std::endl;
}

//添加经理实现
void ManagerStaff::addStaff() {
    Staff *c = new ManagerStaff(staffNum, staffName, staffJob);
}

//老板构造函数实现
BossStaff::BossStaff(int num, std::string name, std::string job) {
    this->staffNum = num;
    this->staffName = name;
    this->staffJob = job;
    writeInDoc(this);

}

//老板任务实现
void BossStaff::Duties() {
    std::cout << "管理公司所有事务" << std::endl;
}

//添加老板实现
void BossStaff::addStaff() {
    Staff *c = new BossStaff(staffNum, staffName, staffJob);
}
