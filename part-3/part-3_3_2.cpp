#include <iostream>
#include <string.h>

using namespace std;

class Student
{
public:
    string m_strName;
    unsigned int m_iAge;
};

int main(void)
{
    Student stu;

    stu.m_strName = "immoc";
    stu.m_iAge = 10;

    cout << "name: " + stu.m_strName << " age: " << stu.m_iAge << endl;

    return 0;
}
