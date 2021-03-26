#include <iostream>

using namespace std;

struct Coord
{
    int x;
    int y;
};


void fun(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main(void)
{
    int a = 10;
    int &b = a;

    b = 29;
    cout << "a = " << a << endl;
    a = 92;
    cout << "b = " << b << endl;


    Coord c1;
    Coord &c2 = c1;

    c2.x = 10;
    c2.y = 20;

    cout << "c1.x=" << c1.x << " c1.y=" << c1.y << endl;


    int n = 3;
    int *p = &a;
    int *&q = p;

    *q = 5;

    cout << "a = " << a << endl;


    int e = 6, f = 7;

    cout << "e = " << e << " f = " << f << endl;
    fun(e, f);
    cout << "e = " << e << " f = " << f << endl;


    return 0;
}
