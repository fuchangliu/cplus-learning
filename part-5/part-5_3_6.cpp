// 定义两个类，人类中含有数据成员姓名（m_strName）及成员函数eat()
// 士兵类从人类派生，含有数据成员编号（m_strCode)及成员函数attack()
// 在main函数通过对数据的访问，体会公有继承的语法特点。

#include <iostream>

using namespace std;

class Person
{
public:
    string m_strName;
    void eat()
    {
        cout << "eat()" << endl;
    }
};

class Soldier: public Person
{
public:
    string m_strCode;
    void attack()
    {
        cout << "fire!!!" << endl;
    }
};

int main(void)
{
    Soldier soldier;

    soldier.m_strName = "Jim";
    soldier.m_strCode = "20210327";

    cout << soldier.m_strName << endl;
    cout << soldier.m_strCode << endl;

    soldier.eat();
    soldier.attack();

    return 0;
}