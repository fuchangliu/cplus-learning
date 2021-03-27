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
    ~Person()
    {
        cout << "~Person()" << endl;
    }
    void play()
    {
        cout << "Person::play()" << endl;
        cout << m_strName << endl;
    }
protected:
    string m_strName;
};

class Solider: private Person
{
public:
    Solider()
    {
        cout << "Solider()" << endl;
    }
    ~Solider()
    {
        cout << "~Solider()" << endl;
    }
    void work()
    {
        m_strName = "Jim";
        m_iAge = 20;
        cout << m_strName << endl;
        cout << m_iAge << endl;
        cout << "Solider::work()" << endl;
    }
protected:
    int m_iAge;
};

class Infantry: public Solider
{
public:
    Infantry()
    {
        cout << "Infantry()" << endl;
    }
    ~Infantry()
    {
        cout << "~Infantry()" << endl;
    }
    void attack()
    {
        m_strName = "Tom";
        cout << m_strName << endl;
        cout << "attack()" << endl;
    }
};

int main(void)
{
    Infantry solider;
    solider.attack();

    return 0;
}
