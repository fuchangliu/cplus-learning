#include <iostream>

using namespace std;

class CanShut
{
public:
    virtual void aim() = 0;
    virtual void reload() = 0;
};

class Gun : public CanShut
{
public:
    virtual void aim()
    {
        cout << "Gun -- aim" << endl;
    }
    virtual void reload()
    {
        cout << "Gun -- reload" << endl;
    }
};

void Hunting(CanShut *s)
{
    s->aim();
    s->reload();
}

int main(void)
{
    Gun *p = new Gun();
    Hunting(p);

    delete p;
    p = NULL;

    return 0;
}
