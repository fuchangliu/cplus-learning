#include <iostream>

using namespace std;

class Movalbe
{
public:
    virtual void move() = 0;
};

class Bus : public Movalbe
{
public:
    virtual void move()
    {
        cout << "Bus -- move" << endl;
    }
    void carry()
    {
        cout << "Bus -- carry" << endl;
    }
};

class Tank : public Movalbe
{
public:
    virtual void move()
    {
        cout << "Tank -- move" << endl;
    }
    void fire()
    {
        cout << "Thak -- fire" << endl;
    }
};

void doSomething(Movalbe *obj)
{
    obj->move();

    if (typeid(*obj) == typeid(Bus))
    {
        Bus *bus = dynamic_cast<Bus *>(obj);
        bus->carry();
    }

    if (typeid(*obj) == typeid(Tank))
    {
        Tank *tank = dynamic_cast<Tank *>(obj);
        tank->fire();
    }
}

int main(void)
{
    Bus b;
    Tank t;
    doSomething(&b);
    doSomething(&t);

    return 0;
}
