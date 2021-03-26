#include <iostream>

using namespace std;

class Coordinate
{
public:
    Coordinate()
    {
        cout << "Coordinate()" << endl;
    }
    ~Coordinate()
    {
        cout << "~Coordinate()" << endl;
    }
    int m_iX;
    int m_iY;
};

int main(void)
{
    Coordinate coor[3];
    coor[0].m_iX = 3;
    coor[0].m_iY = 5;

    Coordinate *p = new Coordinate[3];
    p->m_iX = 7;
    p->m_iY = 9;

    (p + 1)->m_iX = 11;
    (p + 1)->m_iY = 13;

    for (int i = 0; i < 3; i++)
    {
        cout << "(" << coor[i].m_iX << ", " << coor[i].m_iY << ")" << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "(" << (p + i)->m_iX << ", " << (p + i)->m_iY << ")" << endl;
    }

    delete []p;
    p = NULL;

    return 0;
}
