#include <iostream>
#include <string.h>
#include "Teacher.h"

using namespace std;

void Teacher::setName(string _name)
{
    m_strName = _name;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}

string Teacher::getGender()
{
    return m_strGender;
}

void Teacher::setAge(int _age)
{
    iAge = _age;
}

int Teacher::getAge()
{
    return iAge;
}

void Teacher::teach()
{
    cout << "现在上课..." << endl;
}
