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
        m_strName = "JIM";
        m_iAge = 20;
        cout << "eat()" << endl;
    }
private:
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
        m_strName = "Jim";
        m_iAge = 30;
        cout << "work()" << endl;
    }
public:
    int m_iSalary;
};


int main(void)
{
    Worker worker;
    worker.work();

    // Person person;
    // person.eat();
    // person.m_strName = "Merrry";
    // person.m_iAge = 30;

    return 0;
}
