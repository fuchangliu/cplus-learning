#include <iostream>

using namespace std;

void fun(const int &a, int const &b)
{
    a = 10;
    b = 20;
}

int main(void)
{
    // int x = 3;

    // int y = 5;
    // int * const p = &x;
    
    // *p = 10;

    // cout << x << endl;
//------------------------------------
    // int x = 3;
    // int y = 5;
    // int const *p = &x;
    // cout << *p << endl;
    // p = &y;
    // cout << *p << endl;
//---------------------------------------
    // int x = 3;
    // int y = 5;
    // int const &z = x;
    // z = 10;
    // cout << x << endl;
//-------------------------------------
    int x = 3;
    int y = 5;
    fun(x, y);
    cout << x << " " << y << endl;


    return 0;
}
