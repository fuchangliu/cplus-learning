#include <iostream>

using namespace std;

int main(void)
{
    int *p = new int[1000];
    if (NULL == p)
    {
        delete p;
        p = NULL;

        return 0;
    }

    delete p;
    p = NULL;
    return 0;
}
