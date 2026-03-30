#include <iostream>
#include <string>
#include <iomanip>
//#define p"\n cout<<"********************************"<<endl;
using namespace std;
class student
{
    int roll;
    string name;
    string f_name;
    string m_name;
    string college;
    float marks;

public:
    void input()
    {
        cout << "\n Enter Roll :";
        cin >> roll;
        fflush(stdin);

        cout << "\n Enter Name :";
        getline(cin, name);
        fflush(stdin);

        cout << "\n Enter fathers name :";
        getline(cin, f_name);
        fflush(stdin);

        cout << "\n Enter Mothers Name :";
        getline(cin, m_name);
        fflush(stdin);

        cout << "\n Enter College name :";
        getline(cin, college);
        fflush(stdin);

        cout << "\n Enter Marks :";
        cin >> marks;
    }

    void output()
    {
        cout << setw(3) << roll << left << "  || " << setw(20) << name << left << " || " << setw(20) << f_name << left << " || " << setw(20) << m_name << left << " || " << setw(30) << college << left << " || " << setw(3) << marks << "    || " << endl;
    }
};
int main()
{
    student s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    s1.input();
    s2.input();
    s3.input();
    s4.input();
    s5.input();
    s6.input();
    s7.input();
    s8.input();
    s9.input();
    s10.input();

    cout << "\n\t\t\t ************** student Details *************" << endl;

    cout << "Roll ||      Name            ||     Fathers name     ||     Mothers name     ||      College                   || Marks  ||" << endl;
    s1.output();
    s2.output();
    s3.output();
    s4.output();
    s5.output();
    s6.output();
    s7.output();
    s8.output();
    s9.output();
    s10.output();
    system("pause>0");
    return 0;
}
