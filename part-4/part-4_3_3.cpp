// 浅拷贝
#include <iostream>

using namespace std;

class Array
{
public:
    Array(int count)
    {
        m_iCount = count;
        m_pArr = new int[m_iCount];
        for (int i = 0; i < m_iCount; i++)
        {
            m_pArr[i] = i;
        }
        cout << "Array()" << endl;
    }
    Array(Array &arr)
    {
        m_iCount = arr.m_iCount;
        m_pArr = new int[m_iCount];

        for (int i = 0; i < (m_iCount); i++)
        {
            m_pArr[i] = arr.m_pArr[i];
        }

        cout << "Array(Array &arr)" << endl;
    }
    ~Array()
    {
        delete []m_pArr;
        m_pArr = NULL;
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
    void printAddr()
    {
        cout << "m_pArr的值是：" << m_pArr << endl;
    }
    void printArr()
    {
        for (int i = 0; i < m_iCount; i++)
        {
            cout << m_pArr[i] << endl;
        }
    }
private:
    int m_iCount;
    int *m_pArr;
};

int main(void)
{
    Array arr1(5);
    Array arr2(arr1);

    arr1.printAddr();
    arr2.printAddr();
    arr1.printArr();
    arr2.printArr();

    cout << arr2.getCount() << endl;

    return 0;
}
