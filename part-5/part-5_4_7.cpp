#include <iostream>

using namespace std;

class Person
{
public:
    void attack()
    {
        cout << "attatck" << endl;
    }
    string m_strName;
};

class Soldier: public Person
{
public:
    string m_strName;
    void attack()
    {
        cout << "fire!!!" << endl;
    }
};

int main(void)
{
    Soldier soldier;
    soldier.m_strName = "Tomato";

    soldier.Person::m_strName = "Jim";

    cout << soldier.m_strName << endl;
    cout << soldier.Person::m_strName << endl;

    soldier.attack();
    soldier.Person::attack();

    return 0;
}