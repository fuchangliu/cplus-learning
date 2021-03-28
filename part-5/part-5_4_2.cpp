#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        m_strName = "Merry";
        cout << "Person()" << endl;
    }
    void play()
    {
        cout << "Person::play() " << m_strName << endl;
    }
private:
    string m_strName;
};

class Soldier: public Person
{
public:
    Soldier()
    {
        cout << "Soldier()" << endl;
    }
    void play()
    {
        cout << "Soldier::play() " << m_strName << endl;
    }
    void work()
    {
        m_strName = "Jim";
        cout << "work() "<< endl;
    }
private:
    string m_strName;
};

int main(void)
{
    Soldier soldier;
    soldier.work();
    soldier.play();
    soldier.Person::play();

    return 0;
}
