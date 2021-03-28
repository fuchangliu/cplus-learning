#include <iostream>
#include <stdlib.h>

using namespace std;

class Flyable
{
public:
    virtual void takeoff() = 0;
    virtual void land() = 0;
};

class Plane : public Flyable
{
public:
    virtual void takeoff()
    {
        cout << "Plane::takeoff()" << endl;
    }
    virtual void land()
    {
        cout << "Plane::land()" << endl;
    }
    void carry()
    {
        cout << "Plane::carry()" << endl;
    }
};

class Bird : public Flyable
{
public:
    virtual void takeoff()
    {
        cout << "Bird::takeoff()" << endl;
    }
    virtual void land()
    {
        cout << "Bird::land()" << endl;
    }
    void foraging()
    {
        cout << "Bird::foraging()" << endl;
    }   
};

void doSomething(Flyable *obj)
{
    cout << typeid(*obj).name() << endl;
    obj->takeoff();

    if (typeid(*obj) == typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if (typeid(*obj) == typeid(Plane))
    {
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane->carry();
    }
    obj->land();
}


int main(void)
{
    Bird b;
    doSomething(&b);

    Plane p;
    doSomething(&p);

    Flyable *q = new Bird();
    cout << typeid(q).name() << endl;
    cout << typeid(*q).name() << endl;

    return 0;
}
