#include <iostream>
#include <string.h>

using namespace std;

class Student
{
public:
    void setName(string _name)
    {
        m_strName = _name;
    }
    string getName()
    {
        return m_strName;
    }
    void setAge(int _age)
    {
        m_iAge = _age;
    }
    int getAge()
    {
        return m_iAge;
    }

private:
    string m_strName;
    int m_iAge;
};

int main(void)
{
    Student *stu = new Student();
    
    stu->setName("imooc");
    stu->setAge(10);

    cout << stu->getName() << " " << stu->getAge() << endl;

    return 0;
}
