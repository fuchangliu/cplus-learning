#include <iostream>

using namespace std;

class Person
{
public:
    Person(string color = "blue")
    {
        m_strColor = color;
        cout  << "person()" << endl;
    }
    virtual ~Person()
    {
        cout  << "~person()" << endl;
    }
    void printColor()
    {
        cout << "Person::printColor() " << m_strColor << endl;
    }
protected:
    string m_strColor;
};

class Worker : virtual public Person
{
public:
    Worker(string code = "001", string color = "blue"):Person(color)
    {
        m_strCode = code;
        cout << "Worker()" << endl;
    }
    ~Worker()
    {
        cout << "~Worker()" << endl;
    }
    void work()
    {
        cout << "Worker::work() " << m_strCode << endl;
    }
protected:
    string m_strCode;
};

class Farmer : virtual public Person
{
public:
    Farmer(string name = "Jack", string color = "blue"):Person(color)
    {
        m_strName = name;
        cout << "Farmer()" << endl;
    }
    ~Farmer()
    {
        cout << "Farmer()" << endl;
    }
    void show()
    {
         cout << "Farmer::show() " << m_strName << endl;
    }
private:
    string m_strName;
};

class MigrantWorker : public Farmer, public Worker
{
public:
    MigrantWorker(string name, string code , string color):Farmer(name, color), Worker(code, color)
    {
        cout << "MigrantWorker()" << endl;
    }
    ~MigrantWorker()
    {
        cout << "~MigrantWorker()" << endl;
    }
};

int main(void)
{
    MigrantWorker *p = new MigrantWorker("Tom", "002", "yellow");

    delete p;
    p= NULL;

    return 0;
}
