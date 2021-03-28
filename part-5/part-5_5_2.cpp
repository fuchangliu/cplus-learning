#include <iostream>

using namespace std;

class Person
{
public:
    string m_strName;
    Person(string name = "Jim")
    {
        m_strName = name;
        cout << "Person()" << endl;
    }
    ~Person()
    {
        cout << "~Person()" << endl;
    }
    void play()
    {
        cout << "Person::play() " << m_strName << endl;
    }
};

class Soldier: public Person
{
public:
    int m_iAge;
    Soldier(string name = "James", int age = 20)
    {
        m_strName = name;
        m_iAge = age;
        cout << "Soldier()" << endl;
    }
    ~Soldier()
    {
        cout << "~Soldier()" << endl;
    }
    void work()
    {
        cout << "Soldier::work() " << m_strName << " " << m_iAge << endl;
    }
};

class Infantry: public Soldier
{
public:
    Infantry(string name = "Jack", int age = 30)
    {
        m_strName = name;
        m_iAge = age;
        cout << "Infantry()" << endl;
    }
    ~Infantry()
    {
        cout << "~Infantry()" << endl;
    }
    void attack()
    {
         cout << "Infantry::attack() " << m_strName << " " << m_iAge  << endl;
    }
};

void test1(Person p)
{
    p.play();
}

void test2(Person &p)
{
    p.play();
}

void test3(Person *p)
{
    p->play();
}

int main(void)
{
    Infantry infantry;
    test1(infantry);
    test2(infantry);
    test3(&infantry);

    return 0;
}