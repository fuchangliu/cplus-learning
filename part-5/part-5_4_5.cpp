#include <iostream>

using namespace std;

class Person
{
public:
    Person(string name = "Jim")
    {
        m_strName = name;
        cout << "Person()" << endl;
    }
    virtual ~Person()
    {
        cout << "~Person()" << endl;
    }
    void play()
    {
        cout << "Person::play() " << m_strName << endl;
    }
protected:
    string m_strName;
};

class Soldier: public Person
{
public:
    Soldier(string name = "James", int age = 20)
    {
        m_strName = name;
        m_iAge = age;
        cout << "Soldier()" << endl;
    }
    virtual ~Soldier()
    {
        cout << "~Soldier()" << endl;
    }
    void work()
    {
        cout << "work()" << endl;
        cout << m_strName << endl;
        cout << m_iAge << endl;
    }
protected:
    int m_iAge;
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
    Person *p = new Person;
    Soldier *s = new Soldier;

    test3(p);
    test3(s);

    return 0;
}
