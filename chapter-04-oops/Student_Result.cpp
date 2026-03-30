#include <iostream>
#include <string>
using namespace std;
// Lets create a class of student which will contain student details...
class Students
{
    int roll;
    int s1, s2, s3, s4, s5, totalmarks;
    char name[20];
    string fathers_name;
    string DOB;

public:
    void input()
    {
        cout << "\n\n\t\t\t\t\tWelcome Genious Students :" << endl;
        cout << "\nDear Students Please Provide your details :" << endl;
        cout << "Enter Your Roll No :" << endl;
        cin >> roll;
        cout << "\nNow Enter Your Beatiful Name :" << endl;
        cin >> name;

        cout << "\nEnter Your Fathers Name :" << endl;
        cin >> fathers_name;

        cout << "\nIts Time To Date Of Birth :" << endl;
        cin >> DOB;
    }
    void Total_marks()
    {
        cout << "\n\nAnd Lastly Enter Your Subject Marks According you obtain so i can add for you :" << endl;
        cout << "Enter Physics Marks :" << endl;
        cin >> s1;
        cout << "Enter Chemestry Marks :" << endl;
        cin >> s2;
        cout << "Enter Biology Marks :" << endl;
        cin >> s3;
        cout << "Enter Hindi Marks :" << endl;
        cin >> s4;
        cout << "Enter English Marks :" << endl;
        cin >> s5;
        totalmarks = s1 + s2 + s3 + s4 + s5;
    }
    void output()
    {
        cout << "\n\n\nRoll No -> " << roll << "\nName -> " << name << "\nFather_Name -> " << fathers_name << "\nDate Of Birth -> " << DOB << endl;
        cout << "TOTAL MARKS = " << totalmarks << endl;
    }
};

int main()
{
    Students s1;
    s1.input();
    s1.Total_marks();
    s1.output();
    system("pause>0");
    return 0;
}
