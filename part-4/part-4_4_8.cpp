#include <iostream>

using namespace std;

class Array
{
public:
    Array(int len)
    {
        this->len = len;
        cout << "Array()" << endl;
    }
    ~Array()
    {
        cout << "~Array()" << endl;
    }
    void setLen(int len)
    {
        this->len = len;
    }
    int getLen()
    {
        return this->len;
    }
    Array& printInfo()
    {
        cout << "printInfo() this = " << this<< endl;
        return *this;
    }
private:
    int len;
};

int main(void)
{
    Array arr1(10);
    arr1.printInfo().setLen(5);
    cout << &arr1 << endl;
    cout << "arr1 len = " << arr1.getLen() << endl;

    return 0;
}
