#include "Student.h"

using namespace std;

int main()
{
    Student student1;
    int yo;
    string fullName, birthDay, classGroup, studentCardNum;

    getline(cin, fullName);
    student1.setFullName(fullName);
    getline(cin, birthDay);
    student1.setBirthDay(birthDay);
    cin >> yo;
    student1.setYo(yo);
    getline(cin, classGroup);
    student1.setClassGroup(classGroup);
    getline(cin, studentCardNum);
    student1.setStudentCardNum(studentCardNum);

    string student1String(("ФИО: %s\nДень рождения: %s\nВозраст: %i\nГруппа: %s\nНомер студенческого билета: %s", fullName, birthDay, yo, classGroup, studentCardNum));
}
