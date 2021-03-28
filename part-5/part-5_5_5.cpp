#include <iostream>

using namespace std;

using namespace std;

class Worker
{
public:
    Worker(string name)
    {
        m_strName = name;
        cout << "Worker()" << endl;
    }
    ~Worker()
    {
        cout << "~Worker()" << endl;
    }
    void work()
    {
        cout << "work " << m_strName << endl;
    }
protected:
    string m_strName;
};

class Children
{
public:
    Children(int age)
    {
        m_iAge = age;
        cout << "Children() " << endl;
    }
    ~Children()
    {
        cout << "~Children()" << endl; 
    }
    void play()
    {
        cout << "play() " << m_iAge << endl;
    }
protected:
    int m_iAge;
};

class ChildLabourer : public Worker, public Children
{
public:
    ChildLabourer(string name, int age): Worker(name), Children(age)
    {
        cout << "ChildLabourer()" << endl;
    }
    ~ChildLabourer()
    {
        cout << "~ChildLabourer()" << endl;
    }
};

int  main(void)
{
    ChildLabourer *p = new ChildLabourer("Tom", 8);
    p->play();
    p->work();

    delete p;
    p = NULL;

    return 0;
}