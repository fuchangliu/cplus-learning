#include <iostream>

using namespace std;

class Farmer
{
public:
    Farmer(string name = "Jack")
    {
        m_strName = name;
        cout << "Farmer()" << endl;
    }
    virtual ~Farmer()
    {
        cout << "~Farmer()" << endl;
    }
    void sow()
    {
        cout << "Farmer::sow() " << m_strName << endl;
    }
protected:
    string m_strName;
};

class Worker
{
public:
    Worker(string code = "001")
    {
        m_strCode = code;
        cout << "Worker()" << endl;
    }
    virtual ~Worker()
    {
        cout << "~Worker()" << endl;
    }
    void carry()
    {
        cout << "work::carry() " << m_strCode << endl;
    }
protected:
    string m_strCode;
};

class MigrantWorker: public Farmer, public Worker
{
public:
    MigrantWorker(string name, string code): Farmer(name), Worker(code)
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
    MigrantWorker migrantworker("Tom", "002");
    migrantworker.Farmer::sow();
    migrantworker.Worker::carry();

    return 0;
}
