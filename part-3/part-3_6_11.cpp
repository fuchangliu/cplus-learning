#include <iostream>

using namespace std;

class Teacher
{
public:
    Teacher(string name, int age):m_strName(name),m_iAge(age)
    {
        cout << "Teacher(string name, int age):m_strName(name),m_iAge(age)" << endl;
    }
    Teacher(const Teacher &tea) // 拷贝构造函数的参数是确定的，不能重载
    {
        cout << "Teacher(const Teacher &tea)" << endl;
    }
    ~Teacher()
    {
        cout << "~Teacher()" << endl;
    }
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
    Teacher t1("zhangsan", 4);
    Teacher *t2 = new Teacher("lisi", 5);
    Teacher t3(t1);
    delete t2;

    return 0;
}