#include <iostream>
#include <string.h>
#include "Teacher.h"

using namespace std;

int main(void)
{
    Teacher t;

    t.setName("孔子");
    t.setGender("男");
    t.setAge(30);

    cout << t.getName() << " " << t.getGender() << " " << t.getAge() << endl;
    t.teach();

    return 0;
}
