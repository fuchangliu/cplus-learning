#include <iostream>

using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal()" << endl;
    }
    Animal(string name)
    {
        m_strName = name;
        cout << "Animal(string name)" << endl;
    }
    virtual ~Animal()
    {
        cout << "~Animal()" << endl;
    }
    virtual void eat()
    {
        cout << "Animal::eat() " << m_strName << endl;
    }
    virtual void move() = 0;
public:
    string m_strName;
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog()" << endl;
    }
    Dog(string name)
    {
        m_strName = name;
        cout << "Dog(string name)" << endl;
    }
    virtual ~Dog()
    {
        cout << "~Dog()" << endl;
    }
    virtual void eat()
    {
        cout << "Dog::eat() " << m_strName << endl;
    }
    virtual void move()
    {
        cout << "Dog::move() " << m_strName << endl;
    }
public:
    string m_strName;
};

int main(void)
{
    Animal *p = new Dog("Tom");
    p->eat();
    p->move();

    delete p;
    p = NULL;

    return 0;
}
