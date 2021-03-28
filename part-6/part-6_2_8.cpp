#include <iostream>

using namespace std;

class Shapre
{
public:
    Shapre()
    {
        cout << "Shapre()" << endl;
    }
    virtual ~Shapre()
    {
        cout << "~Shapre()" << endl;
    }
    virtual double calcArea()
    {
        cout << "Shape::calcArea" << endl;
        return 0;
    }
};

class Circle : public Shapre
{
public:
    Circle(int r)
    {
        m_iR = r;
        cout << "Circle()" << endl;
    }
    ~Circle()
    {
        cout << "~Circle()" << endl;
    }
protected:
    int m_iR;
};

int main(void)
{
    Shapre shape;
    cout << sizeof(shape) << endl;

    int *p = (int *)&shape;
    cout << p << endl;
    cout << (unsigned int)(*p) << endl;

    cout << "--------------------------------" << endl;

    Circle circle(100);
    cout << sizeof(circle) << endl;

    int *q = (int *)&circle;
    cout << q << endl;
    cout << (unsigned int)(*q) << endl;
    cout << (unsigned int)(*(q+1)) << endl;

    return 0;
}
