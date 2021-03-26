#include <iostream>

using namespace std;

inline void fun(int i =  30, int j = 20, int k = 10);
inline void fun(double i, double j, double k);

int main(void)
{
    fun();
    fun(100);
    fun(100, 200);
    fun(100, 200, 300);
    fun(1.0, 2.0, 3.0);
    return 0;
}

void fun(int i, int j, int k)
{
    cout << "i = " << i << " j = " << j << " k = " << k << endl;
    cout << "fun_int_int_int" << endl;
}

void fun(double i, double j, double k)
{
    cout << "i = " << i << " j = " << j << " k = " << k << endl;
    cout << "fun_double_double_double" << endl;
}

