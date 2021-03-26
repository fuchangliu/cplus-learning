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
    void printInfo()
    {
        cout << "printInfo() " << this->len << endl;
    }
private:
    int len;
};

int main(void)
{
    Array arr1(10);
    cout << arr1.getLen() << endl;
    arr1.printInfo();

    return 0;
}
