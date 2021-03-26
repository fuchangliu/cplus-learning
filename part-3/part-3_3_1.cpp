#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    string name;

    cout << "Please input name: " << endl;

    getline(cin, name);

    if (name.empty())
    {
        cout << "Input is null... " << endl;

        return 0;
    }
    if ("imooc" == name)
    {
        cout << "imooc is administrator... " << endl;
    }

    cout << "hello " + name << endl;
    cout << "name length is " << name.size() << endl;
    cout << "name fist char is " << name[0] << endl;

    return 0;
}
