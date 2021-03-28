#include <iostream>

using namespace std;

class Flyable
{
public:
    virtual void takeoff() = 0;
    virtual void land() = 0;
};

class Plane
{
public:
    Plane(string code)
    {
        m_strCode = code;
        cout << "Plane()" << endl;
    }
    ~Plane()
    {
        cout << "~Plane()" << endl;
    }
    // virtual void takeoff()
    // {
    //     cout << "Plane::takeoff..." << endl;
    // }
    // virtual void land()
    // {
    //     cout << "Plane::land..." << endl;
    // }
    void printCode()
    {
        cout << "printcode() " << m_strCode << endl;
    }
protected:
    string m_strCode;
};

class FighterPlane : public Plane, public Flyable
{
public:
    FighterPlane(string code):Plane(code)
    {

    }
    ~FighterPlane()
    {
        cout << "~FighterPlane() " << endl;
    }
    virtual void takeoff()
    {
        cout << "FighterPlane::takeoff..." << endl;
    }
    virtual void land()
    {
        cout << "FighterPlane::land..." << endl;
    }
};

void flyMatch(FighterPlane *f1, FighterPlane *f2)
{
    f1->takeoff();
    f1->land();
    f2->takeoff();
    f2->land();
}

int main(void)
{
    // Plane p1("001");
    // Plane p2("002");
    // p1.printCode();
    // p2.printCode();

    // flyMatch(&p1, &p2);


    FighterPlane p3("003");
    FighterPlane p4("004");
    p3.printCode();
    p4.printCode();

    flyMatch(&p3, &p4);

    return 0;
}
