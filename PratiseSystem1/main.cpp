#include <iostream>

#define MAX 1000
#define CLEAR() printf("\033[2J")
/* 通讯录管理系统
 * 系统需求：
 * 通讯录是一个可以记录亲人、好友信息的工具
 * 本系统利用C++实现一个通讯录管理系统
 * 系统中需要实现的功能如下：
 * （1）添加联系人：向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址)最多记录1000人
 * （2）显示联系人：显示通讯录中所有联系人信息
 * （3）删除联系人：按照姓名删除指定联系人
 * （4）查找联系人：按照姓名查看指定联系人信息
 * （5）修改联系人：按照姓名重新修改指定联系人
 * （6）清空联系人：清空通讯录中所有信息
 * （7）退出通讯录：退出当前使用的通讯录
 */

//创建联系人结构体
struct person {
    std::string name;
    std::string sex;
    int age;
    int telephone;
    std::string address;
};
//创建通讯录结构体
struct addressBook {
    person personArray[MAX];
    int sizeOfPerson;
};

void showMenu();

void addPersonInfo(addressBook *p);//添加联系人
void printPersonInfo(addressBook *p);//显示所有联系人信息
int checkPersonExist(addressBook *p);//判断联系人是否存在；若存在，则返回联系人的索引，否则返回-1
void printPersonInfoSingle(addressBook *p);//显示查找联系人信息
void deletePersonInfo(addressBook *p);//删除某个联系人信息
void deletePersonInfoAll(addressBook *p);//删除所有联系人信息
void changePersonInfo(addressBook *p);//修改联系人信息


int main() {
    //创建通讯录对象
    addressBook bookArr;
    //初始化通讯录对象的参数
    bookArr.sizeOfPerson = 0;
    person personArr[0];
    int length = sizeof(personArr) / sizeof(personArr[0]);
    int select = -1;
    while (select != 0) {
        showMenu();
        std::cout << "请输入执行的操作编号" << std::endl;
        std::cin >> select;
        switch (select) {
            case 0:
                return 0;
                break;
            case 1:
                addPersonInfo(&bookArr);
                break;
            case 2:
                printPersonInfo(&bookArr);
                break;
            case 3:
                deletePersonInfo(&bookArr);
                break;
            case 4:
                printPersonInfoSingle(&bookArr);
                break;
            case 5:
                changePersonInfo(&bookArr);
                break;
            case 6:
                deletePersonInfoAll(&bookArr);
                break;

        }
    }


}

//显示菜单
void showMenu() {
    std::cout << "*********************************" << std::endl;
    std::cout << "********* 1、添加联系人 ***********" << std::endl;
    std::cout << "********* 2、显示联系人 ***********" << std::endl;
    std::cout << "********* 3、删除联系人 ***********" << std::endl;
    std::cout << "********* 4、查找联系人 ***********" << std::endl;
    std::cout << "********* 5、修改联系人 ***********" << std::endl;
    std::cout << "********* 6、清空联系人 ***********" << std::endl;
    std::cout << "********* 0、退出通讯录 ***********" << std::endl;
    std::cout << "*********************************" << std::endl;

}

//添加联系人
void addPersonInfo(addressBook *p) {
    if (p->sizeOfPerson == MAX) {
        std::cout << "通讯录已满" << std::endl;
        return;
    } else {
        std::cout << "添加新的联系人" << std::endl;
        p->sizeOfPerson++;
        std::cout << "姓名" << std::endl;
        std::cin >> p->personArray[p->sizeOfPerson - 1].name;
        std::cout << "性别" << std::endl;
        std::cin >> p->personArray[p->sizeOfPerson - 1].sex;
        std::cout << "年龄" << std::endl;
        std::cin >> p->personArray[p->sizeOfPerson - 1].age;
        std::cout << "手机号" << std::endl;
        std::cin >> p->personArray[p->sizeOfPerson - 1].telephone;
        std::cout << "住址" << std::endl;
        std::cin >> p->personArray[p->sizeOfPerson - 1].address;
        std::cout << "添加成功" << std::endl;
/*
        std::cout << "按任意键继续" << std::endl;
        std::cin.ignore();
        CLEAR();
        getchar();
*/
        system("clear");
    }
}

//显示联系人
void printPersonInfo(addressBook *p) {
    if (p->sizeOfPerson == 0) {
        std::cout << "通讯录内无联系人！返回菜单！" << std::endl;
        return;
    } else {
        std::cout << "姓名：" << "\t性别：" << "\t年龄：" << "\t联系电话：" << "\t家庭住址：" << std::endl;
        for (int i = 0; i < p->sizeOfPerson; ++i) {
            std::cout << p->personArray[i].name << "\t" << p->personArray[i].sex << "\t    " << p->personArray[i].age
                      << "\t    " << p->personArray[i].telephone
                      << "\t    "
                      << p->personArray[i].address << std::endl;
        }
    }
}

//判断查找联系人是否存在
int checkPersonExist(addressBook *p) {
    std::string name;
    std::cout << "请输入联系人姓名" << std::endl;
    std::cin >> name;
    for (int i = 0; i < p->sizeOfPerson; ++i) {
        if (p->personArray[i].name == name) {
            return i;
        }
    }
    std::cout << "没有该联系人！返回菜单" << std::endl;
    return -1;
}

//查找联系人
void printPersonInfoSingle(addressBook *p) {
    if (p->sizeOfPerson == 0) {
        std::cout << "通讯录内无联系人！返回菜单！" << std::endl;
        return;
    } else {
        int index = checkPersonExist(p);
        if (index >= 0) {
            std::cout << "姓名：" << "\t性别：" << "\t年龄：" << "\t联系电话：" << "\t家庭住址：" << std::endl;
            std::cout << p->personArray[index].name << "\t" << p->personArray[index].sex << "\t    "
                      << p->personArray[index].age
                      << "\t    " << p->personArray[index].telephone
                      << "\t    "
                      << p->personArray[index].address << std::endl;
        } else {
            return;
        }

    }

}

//删除联系人
void deletePersonInfo(addressBook *p) {
    if (p->sizeOfPerson == 0) {
        std::cout << "通讯录内无联系人！返回菜单！" << std::endl;
        return;
    } else {
        int index = checkPersonExist(p);
        if (index >= 0) {
            //要删除某个元素，则用该元素下一个元素覆盖即可，迭代此过程
            for (int j = index; j < p->sizeOfPerson - 1; ++j) {
                p->personArray[j] = p->personArray[j + 1];
            }
            //将元素数量--，更新通讯录中的人员数
            p->sizeOfPerson--;
            std::cout << "删除成功" << std::endl;
        } else {
            return;
        }
    }
}

//修改联系人
void changePersonInfo(addressBook *p) {
    int index = checkPersonExist(p);
    if (index >= 0) {
        std::cout << "请输入要修改的信息：" << std::endl;
        std::cout << "姓名：" << std::endl;
        std::cin >> p->personArray->name;
        std::cout << "性别：" << std::endl;
        std::cin >> p->personArray->sex;
        std::cout << "年龄：" << std::endl;
        std::cin >> p->personArray->age;
        std::cout << "电话：" << std::endl;
        std::cin >> p->personArray->telephone;
        std::cout << "住址：" << std::endl;
        std::cin >> p->personArray->address;
        std::cout << "姓名：" << "\t性别：" << "\t年龄：" << "\t联系电话：" << "\t家庭住址：" << std::endl;
        std::cout << p->personArray[index].name << "\t" << p->personArray[index].sex << "\t    "
                  << p->personArray[index].age
                  << "\t    " << p->personArray[index].telephone
                  << "\t    "
                  << p->personArray[index].address << std::endl;
    } else {
        return;
    }
}

//清空联系人
void deletePersonInfoAll(addressBook *p) {
    p->sizeOfPerson = 0;
    std::cout<<"通讯录已清空"<<std::endl;
}

