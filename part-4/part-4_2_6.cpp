#include <iostream>

using namespace std;

class Coordinate
{
public:
    Coordinate(int x, int y): m_iX(x), m_iY(y)
    {
        cout << "Coordinate() " << m_iX << ", " << m_iY << endl;
    }
    ~Coordinate()
    {
        cout << "Coordinate() " << m_iX << ", " << m_iY << endl;
    }
    void setX(int x)
    {
        m_iX = x;
    }
    int getX()
    {
        return m_iX;
    }
    void setY(int y)
    {
        m_iY = y;
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
    Line(int x1, int y1, int x2, int y2): m_coorA(x1, y1), m_coorB(x2, y2)
    {
        cout << "Line()" << endl;
    }
    ~Line()
    {
        cout << "~Line()" << endl;
    }
    void setA(int x, int y)
    {
        m_coorA.setX(x);
        m_coorA.setY(y);
    }
    void setB(int x, int y)
    {
        m_coorB.setX(x);
        m_coorB.setY(y);
    }
    void printInfo()
    {
        cout << "(" << m_coorA.getX() << ", " << m_coorA.getY() << ")"<< endl;
        cout << "(" << m_coorB.getX() << ", " << m_coorB.getY() << ")"<< endl;
    }
private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};

int main(void)
{
    Line *p = new Line(1, 2, 3, 4);

    p->printInfo();

    delete p;
    p = NULL;

    return 0;
}
