#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char *str = new char[100];

    if (NULL == str)
    {
        return -1;
    }

    strcpy(str, "Hello imooc");

    cout << str << endl;
    
    delete []str;
    str = NULL;

    return 0;
}
