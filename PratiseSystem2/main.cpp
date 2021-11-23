#include <iostream>
#include "Menu.h"
#include "Staff.h"

/* 职工管理系统
 * 1、管理系统需求：
 *      职工管理系统可以用来管理公司内所有员工的信息
 *      本校成主要利用C++来实现一个基于多态的职工管理系统
 *
 * 2、公司中职工分为三类：普通员工、经理、老板、显示信息时，需要显示职工编号、职工姓名、职工岗位、以及职责
 *      普通员工职责：完成经理交给的任务
 *      经理职责：完成老板交给的任务，并下发任务给员工
 *      老板职责：管理公司所有事务
 * 3、管理系统中需要实现的功能如下：
 *      （1）退出管理系统
 *      （2）增加职工信息:实现批量增加职工功能，将信息录入到文件中，职工信息为：职工编号、姓名、部门编号
 *      （3）显示职工信息：显示公司内部所有职工的信息
 *      （4）删除离职职工：按照编号删除指定的职工
 *      （5）修改职工信息：按照编号修改职工个人信息
 *      （6）查找职工信息：按照职工的编号或者职工的姓名进行查找相关人员信息
 *      （7）按照编号排序：按照职工编号，进行排序，排序规则用用户指定
 *      （8）清空所有文档：清空文件中记录的所有职工信息（清空前需要在此确认，防止误删）
 */

int sumOfStaff = 0;
Staff *p[1000];

void writeDoc();

//添加成员
void addMember(int numOfStaff) {
    for (int i = 0; i < numOfStaff; ++i) {
        std::cout << "正在输入第" << i + 1 << "个人员信息" << std::endl;
        std::cout << "请输入第" << i + 1 << "人员的姓名" << std::endl;
        std::string name;
        std::cin >> name;
        std::cout << "请输入第" << i + 1 << "人员的编号" << std::endl;
        int number;
        std::cin >> number;
        std::cout << "请输入第" << i + 1 << "人员的职责\n1、普通员工\n2、经理\n3、老板" << std::endl;
        int job;
        std::cin >> job;
        switch (job) {
            case 1: {
                p[sumOfStaff] = new CommonStaff(number, name, "普通员工");
                std::cout << "p" << "[" << sumOfStaff << "]地址 = " << &p[sumOfStaff] << std::endl;
                break;
            }
            case 2: {
                p[sumOfStaff] = new ManagerStaff(number, name, "经理");
                break;
            }
            case 3: {
                p[sumOfStaff] = new BossStaff(number, name, "老板");
                break;
            }
            default:
                break;
        }
        sumOfStaff++;
    }
}

//删除成员
void DeleteMember(int num) {
    for (int i = 0; i < sumOfStaff; ++i) {
        if (p[i]->staffNum == num) {
            for (int j = i; j < sumOfStaff - 1; ++j) {
                p[j] = p[j + 1];
            }
            sumOfStaff--;
        }
    }
}

//修改员工信息--编号重载
void ChangeMember(int num) {
    for (int i = 0; i < sumOfStaff; ++i) {
        if (p[i]->staffNum == num) {
            std::cout << "请输入新的员工名称" << std::endl;
            std::string name;
            std::cin >> name;
            p[i]->staffName = name;
            std::cout << "请输入新的员工编号" << std::endl;
            int newNum;
            std::cin >> newNum;
            p[i]->staffNum = newNum;
            std::cout << "请输入新的员工职位:\n1、普通员工\n2、经理\n3、老板" << std::endl;
            int job;
            std::cin >> job;
            switch (job) {
                case 1:
                    p[i]->staffJob = "普通员工";
                    break;
                case 2:
                    p[i]->staffJob = "经理";
                    break;
                case 3:
                    p[i]->staffJob = "老板";
                    break;
                default:
                    std::cout << "输入有误，返回主菜单" << std::endl;
                    return;
            }

        }
    }
}

//修改信息--名称重载
void ChangeMember(std::string ChangeName) {
    for (int i = 0; i < sumOfStaff; ++i) {
        if (p[i]->staffName == ChangeName) {
            std::cout << "请输入新的员工名称" << std::endl;
            std::string name;
            std::cin >> name;
            p[i]->staffName = name;
            std::cout << "请输入新的员工编号" << std::endl;
            int newNum;
            std::cin >> newNum;
            p[i]->staffNum = newNum;
            std::cout << "请输入新的员工职位:\n1、普通员工\n2、经理\n3、老板" << std::endl;
            int job;
            std::cin >> job;
            switch (job) {
                case 1:
                    p[i]->staffJob = "普通员工";
                    break;
                case 2:
                    p[i]->staffJob = "经理";
                    break;
                case 3:
                    p[i]->staffJob = "老板";
                    break;
                default:
                    std::cout << "输入有误，返回主菜单" << std::endl;
                    return;
            }

        }
    }
}

//搜索员工--编号重载
void SearchMember(int num) {
    for (int i = 0; i < sumOfStaff; ++i) {
        if (num == p[i]->staffNum) {
            std::cout << p[i]->staffNum << "\t" << p[i]->staffName << "\t" << p[i]->staffJob << "\t"
                      << std::endl;
        }
    }
}

//搜索员工--姓名重载
void SearchMember(std::string name) {
    for (int i = 0; i < sumOfStaff; ++i) {
        if (name == p[i]->staffName) {
            std::cout << p[i]->staffNum << "\t" << p[i]->staffName << "\t" << p[i]->staffJob << "\t"
                      << std::endl;
        }
    }
}

//排序员工--升降序
void Sort(int style) {
    for (int i = 0; i < sumOfStaff - 1; ++i) {
        for (int j = 0; j < sumOfStaff - i - 1; ++j) {
            if (style == 1) {
                if (p[j]->staffNum > p[j + 1]->staffNum) {
                    p[sumOfStaff] = p[j + 1];
                    p[j + 1] = p[j];
                    p[j] = p[sumOfStaff];
                }
            } else if (style == 2) {
                if (p[j]->staffNum < p[j + 1]->staffNum) {
                    p[sumOfStaff] = p[j + 1];
                    p[j + 1] = p[j];
                    p[j] = p[sumOfStaff];
                }
            }
        }
    }
}

void writeDoc() {
    for (int i = 0; i < sumOfStaff; ++i) {
        Staff::writeInDoc(p[i]);
    }
}

//显示主菜单
void showMenu() {

    int choice = -1;
    while (choice != 0) {
        Menu::showMenu();
        std::cout << "请输入您想要执行的操作编号:" << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::cout << "请输入想要添加的人数" << std::endl;
                int num = 0;
                std::cin >> num;
                if (num > 0) { addMember(num); }
                else { std::cout << "输入有误" << std::endl; }
                break;
            }
            case 2: {
//                Staff::printStaffInfo();
                for (int i = 0; i < sumOfStaff; ++i) {
                    std::cout << p[i]->staffNum << "\t" << p[i]->staffName << "\t" << p[i]->staffJob << "\t"
                              << std::endl;
                }
                break;
            }
            case 3: {
                std::cout << "请输入要删除的人员编号" << std::endl;
                int num2 = -1;
                std::cin >> num2;
                DeleteMember(num2);
                break;
            }
            case 4: {
                std::cout << "请输入需要查找的人员编号或姓名:\n1、编号\n2、姓名" << std::endl;
                int num;
                std::cin >> num;
                switch (num) {
                    case 1: {
                        std::cout << "请输入要查找的人员编号" << std::endl;
                        int memberNum;
                        std::cin >> memberNum;
                        SearchMember(memberNum);
                        break;
                    }
                    case 2: {
                        std::cout << "请输入要查找的人员姓名" << std::endl;
                        std::string memberName;
                        std::cin >> memberName;
                        SearchMember(memberName);
                        break;
                    }
                    default:
                        std::cout << "输入有误" << std::endl;
                }
                break;
            }

            case 5: {
                std::cout << "请输入需要修改的人员编号或姓名:\n1、编号\n2、姓名" << std::endl;
                int num = 0;
                std::cin >> num;
                switch (num) {
                    case 1: {
                        std::cout << "请输入要修改的人员编号" << std::endl;
                        int memberNum;
                        std::cin >> memberNum;
                        ChangeMember(memberNum);
                        break;
                    }
                    case 2: {
                        std::cout << "请输入要修改的人员姓名" << std::endl;
                        std::string memberName;
                        std::cin >> memberName;
                        ChangeMember(memberName);
                        break;
                    }
                    default:
                        std::cout << "输入有误" << std::endl;
                }
                break;
            }
            case 6: {
                std::cout << "请输入排序方法:\n1、升序排序\n2、降序排序" << std::endl;
                int num;
                std::cin >> num;
                switch (num) {
                    case 1: {
                        Sort(1);
                        break;
                    }
                    case 2: {
                        Sort(2);
                        break;
                    }
                    default:
                        std::cout << "输入有误" << std::endl;
                        break;
                }
                break;

            }
            case 7: {
                std::cout << "将要清空员工信息:\n0、确定" << std::endl;
                int yesOrNo;
                std::cin >> yesOrNo;
                if (!yesOrNo) {
                    std::fstream fs;
                    fs.open("Data.md", std::ios::out);
                    fs << "";
                    fs.close();
                } else {
                    break;
                }
                break;
            }

            default:
                system("clear");
                break;

        }
    }
    std::cout << "感谢使用本系统，欢迎下次使用" << std::endl;
}


int main() {
    showMenu();
    return 0;
}
