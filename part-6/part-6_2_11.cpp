#include <iostream>

using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal()" << endl;
    }
    virtual ~Animal()
    {
        cout << "~Animal()" << endl;
    }
    virtual void eta()
    {
        cout << "Animal::eat()" << endl;
    }
    virtual void move()
    {
        cout << "Animal::move()" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog()" << endl;
    }
    virtual ~Dog()
    {
        cout << "~Dog()" << endl;
    }
    virtual void eta()
    {
        cout << "Dog:eat()" << endl;
    }
    virtual void move()
    {
        cout << "Dog::move()" << endl;
    }
};

int main(void)
{
    Animal *p = new Dog();
    p->eta();
    p->move();

    delete p;
    p = NULL;

    return 0;
}