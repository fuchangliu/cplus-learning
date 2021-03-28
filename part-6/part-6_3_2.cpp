#include <iostream>

using namespace std;

class Person
{
public:
    Person(string name)
    {
        m_strName = name;
        cout << "Person()" << endl;
    }
    virtual ~Person()
    {
        cout << "~Person()" << endl;
    }
    virtual void work() = 0;
protected:
    string m_strName;
};

class Worker : public Person
{
public:
    Worker(string name, int age):Person(name)
    {
        m_iAge = age;
        cout << "Worker()" << endl;
    }
    virtual ~Worker()
    {
        cout << "~Worker()" << endl;
    }
    // virtual void work()
    // {
    //     cout << "work()" << endl;
    // }
protected:
    int m_iAge;
};

class Dustman : public Worker
{
public:
    Dustman(string name, int age):Worker(name, age)
    {
        cout << "Dustman" << endl;
    }
    virtual ~Dustman()
    {
        cout << "~Dustman" << endl;
    }
    void work()
    {
        cout << "扫地" << endl;
    }
protected:
};

int main(void)
{
    Dustman dustman("zhangsan", 20);
    dustman.work();

    return 0;
}
