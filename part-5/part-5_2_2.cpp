#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person()" << endl;
    }
    ~Person()
    {
        cout << "~Person()" << endl;
    }
    void eat()
    {
        cout << "eat()" << endl;
    }
public:
    string m_strName;
    int m_iAge;
};


class Worker: public Person
{
public:
    Worker()
    {
        cout << "Worker()" << endl;
    }
    ~Worker()
    {
        cout << "~Worker()" << endl;
    }
    void work()
    {
        cout << "work()" << endl;
    }
public:
    int m_iSalary;
};


int main(void)
{
    Worker *p = new Worker();
    p->m_strName = "Jim";
    p->m_iAge = 10;
    p->eat();
    p->work();
    p->m_iSalary = 1000;

    delete p;
    p = NULL;

    return 0;
}
