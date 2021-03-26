#include <iostream>

using namespace std;


class Teacher
{
public:
    Teacher()
    {
        m_strName = "Tom";
        m_iAge = 5;
        cout << "Teacher()" << endl;
    }
    Teacher(string name, int age = 20)
    {
        m_strName = name;
        m_iAge = age;
        cout << "Teacher(string name, int age)" << endl;
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
    Teacher t1;
    cout << t1.getName() << " " << t1.getAge() << endl;
    Teacher *p = new Teacher("Jerry", 10);
    cout << p->getName() << " " << p->getAge() << endl;
    Teacher *q = new Teacher("James");
    cout << q->getName() << " " << q->getAge() << endl;
    delete q;
    q = NULL;  
    delete p;
    p = NULL;    

    return 0;
}
