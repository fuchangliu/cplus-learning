// 拷贝口燥函数
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

void test(Teacher t)
{

}

int main()
{
    Teacher t1("Jim", 10);
    Teacher t2 = t1;
    Teacher t3 = (t1);
    test(t1); // 参数调用也会触发拷贝构造函数

    return 0;
}