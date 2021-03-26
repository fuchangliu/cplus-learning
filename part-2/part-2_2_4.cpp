#include <iostream>

using namespace std;

int main(void)
{
    int x = 3;
    int &y = x;

    cout << "x = " << x << " y = " << y << endl;

    y = 4;

    cout << "x = " << x << " y = " << y << endl;


    return 0;
}
