#include <iostream>

using namespace std;

class Coordinate
{
public:
    Coordinate (int x, int y)
    {
        m_iX = x;
        m_iY = y;
        cout << "Coordinate() " << m_iX << ", " << m_iY << endl;
    }
    ~Coordinate ()
    {
        cout << "~Coordinate() " << m_iX << ", " << m_iY << endl;
    }
    int getX()
    {
        return m_iX;
    }
    int getY()
    {
        return m_iY;
    }
private:
    int m_iX;
    int m_iY;
};

class Line
{
public:
    Line(int x1, int y1, int x2, int y2)
    {
        m_pCoorA = new Coordinate(x1, y1);
        m_pCoorB = new Coordinate(x2, y2);
        cout << "Line()" << endl;
    }
    ~Line()
    {
        delete m_pCoorA;
        delete m_pCoorB;
        m_pCoorA = NULL;
        m_pCoorB = NULL;
        cout << "~Line()" << endl;
    }
    void printInfo()
    {
        cout << "printInfo()" << endl;
        cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
        cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
    }
private:
    Coordinate *m_pCoorA;
    Coordinate *m_pCoorB;
};

int main(void)
{
    Line *p = new Line(1, 2, 3, 4);
    p->printInfo();
    cout << sizeof(p) << endl;
    cout << sizeof(Line) << endl;

    delete p;
    p = NULL;

    return 0;
}
