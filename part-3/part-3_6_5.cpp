// 构造函数初始化列表demo

#include <iostream>

using namespace std;

class Teacher
{
public:
    Teacher(string name, int age, int m):m_strName(name),m_iAge(age),m_iMax(m)
    {
        cout << "Teacher(string name, int age):m_strName(name),m_iAge(age)" << endl;
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
    int getMax()
    {
        return m_iMax;
    }
private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};

int main(void)
{
    Teacher t1("Tom", 10, 100);
    cout << t1.getName() << " " << t1.getAge() << " " << t1.getMax() << endl;

    return 0;
}
