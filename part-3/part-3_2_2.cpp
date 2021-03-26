#include <iostream>

using namespace std;

class Coordinate
{
public:
    int x;
    int y;

    void printX()
    {
        cout << "x = " << x << endl;
    }
    void printY()
    {
        cout << "y = " << y << endl;
    }
};

int main(void)
{
    Coordinate coor;
    coor.x = 1;
    coor.y = 2;
    coor.printX();
    coor.printY();

    Coordinate *p = new Coordinate;
    if (NULL == p)
    {
        return -1;
    }
    p->x = 3;
    p->y = 4;
    p->printX();
    p->printY();
    delete p;
    p = NULL;

    return 0;
}
