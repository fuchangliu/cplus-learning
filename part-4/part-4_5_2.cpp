#include <iostream>

using namespace std;

class Coordinate
{
public:
    Coordinate()
    {

    }
    ~Coordinate()
    {

    }
    void setX(int x)
    {
        m_iX = x;
    }
    void setY(int y)
    {
        m_iY = y;
    }
    void printInfo()
    {

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

    }
    ~Line()
    {

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

    }
private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};

int main(void)
{
    return 0;
}
