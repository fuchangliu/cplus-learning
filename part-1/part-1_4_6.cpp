// C++命名空间
#include <iostream>

using namespace std;

namespace A
{
    int x = 1;
    void fun()
    {
        cout << "A" << endl;
    }

}

namespace B
{
    int x = 2;
    void fun()
    {
        cout << "B" << endl;
    }

    void fun2()
    {
        cout << "2B" << endl;
    }

}

int main(void)
{
    cout << A::x << endl;
    A::fun();
    cout << B::x << endl;
    B::fun();
    B::fun2();

    return 0;
}