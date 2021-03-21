// 定义一个命名空间为myNum,在该命名空间中定义一个整型变量x,
// 并给该变量赋值为105；使用C++新特性判断myNum命名空间下的变量是奇数还是偶数。

#include <iostream>

using namespace std;

namespace myNum
{
    int x = 105;
}

int main(void)
{
    bool isEven = false;

    if (myNum::x % 2 == 0)
    {
        isEven = true;
    }
    else
    {
        isEven = false;
    }

    if (isEven)
    {
        cout << myNum::x << "是偶数"<< endl;
    }
    else
    {
        cout << myNum::x << "是奇数"<< endl;
    }

    return 0;
}