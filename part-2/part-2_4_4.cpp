#include <iostream>

using namespace std;

int getMax(int a, int b)
{
    cout << "getMax(int a, int b)" << endl;
    return a > b ? a : b;
}

int getMax(int *a, int b)
{
    cout << "getMax(int &a, int b)" << endl;
    int *p = a;

    for (int i = 1; i < b; i++)
    {
        if (*p < *(p + i))
        {
            *p = *(p + i);
        }
    }

    return (*p);
}

int main(void)
{
    int numArr[3] = {3, 8, 6};

    cout << getMax(numArr[1], numArr[2]) << endl;
    cout << getMax(numArr, 3) << endl;

    return 0;
}
