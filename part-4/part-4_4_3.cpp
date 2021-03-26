#include <iostream>

using namespace std;

class Coordinate
{
public:
    Coordinate(int x, int y):m_iX(x), m_iY(y)
    {
        cout << "Coordinate(int x, int y)" << endl;
    }
    ~Coordinate()
    {
        cout << "~Coordinate()" << endl;
    }
public:
    int m_iX;
    int m_iY;
};

int main(void)
{
    Coordinate *p = new Coordinate(3, 5);

    cout << p->m_iX << ", " << p->m_iY << endl;

    delete p;
    p = NULL;

    return 0;
}
