#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
protected:
    char name[20];
    int age;

public:
    Student()
    {
    }
};
class result : public Student
{
private:
    int marks;

public:
  
    void inputRecord()
    {
        cout << "Enter Name:" << endl;
        gets(name);
        fflush(stdin);
        cout << "Enter age:" << endl;
        cin >> age;
        if (age < 16)
        {
            throw Student(); // exception throw
        }
        cout << "Enter Marks:" << endl;
        cin >> marks;
        if (marks <= 0 || marks > 100)
        {
            throw result(); // exception throw
        }
    }
    void disp()
    {
        cout << "Name :" << name;
        cout << "Age :" << age;
        cout << "Marks :" << marks;
    }
};
int main()
{
    result obj;
    try
    {
        obj.inputRecord();
    }
    catch (Student)
    {
        cout << "Exception Occour age is not valid .." << endl;
        cout << "Age should be greater than 16 ..." << endl;
    }
    catch (result)
    {
        cout << "Invalid Marks Entry Marks should be less than 100 and greater than 0 ...";
    }
    obj.disp();
    system("pause>0");
    return 0;
}
