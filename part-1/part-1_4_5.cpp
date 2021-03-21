// 要求：提示用户输入一个整数，将改整数分别以八进制，十进制，十六进制打印在屏幕上
// 要求：提示用户输入一个布尔值（0或1），以布尔方式将值打印在屏幕上

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int x = 0;
    bool y = false;

    cout << "请输入一个整数: " << endl;
    cin >> x;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;
    
    cout << "请输入一个布尔值: " << endl;
    cin >> y;
    cout << boolalpha << y << endl;

    return 0;
}