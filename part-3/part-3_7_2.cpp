#include <iostream>

using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Student()" << endl;
    }
    Student(string _name)
    {
        m_strName = _name;
        cout << "Student(string _name)" << endl;
    }
    Student(Student &stu)
    {
        cout << "Student(Student &stu)" << endl;
    }
    ~Student()
    {
        cout << "~Student()" << endl;
    }
    void setName(string _name)
    {
        m_strName = _name;
    }
    string getName()
    {
        return m_strName;
    }

private:
    string m_strName;
};

int main(void)
{
    Student stu1;
    Student stu2(stu1);

    return 0;
}
