#include <iostream>

using namespace std;

int main(void)
{
    int const count = 3;
    const int *p = &count;

    for (int i = 0; i < *p; i++)
    {
        cout << "Hello imooc" << endl;
    }

    return 0;
}
