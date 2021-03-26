// 浅拷贝
#include <iostream>

using namespace std;

class Array
{
public:
    Array()
    {
        cout << "Array()" << endl;
    }
    Array(Array &Arr)
    {
        m_iCount = Arr.m_iCount;
        cout << "Array(Array &Arr)" << endl;
    }
    ~Array()
    {
        cout << "~Array()" << endl;
    }
    void setCount(int count)
    {
        m_iCount = count;
    }
    int getCount()
    {
        return m_iCount;
    }
private:
    int m_iCount;
};

int main(void)
{
    Array arr1;
    arr1.setCount(5);

    Array arr2(arr1);

    cout << arr2.getCount() << endl;

    return 0;
}
