#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float monthlySalary;
    int annualSalary;
    cout << "Dear user Plz enter Your Monthly salary :\n";
    cin >> monthlySalary;

    annualSalary = monthlySalary * 12;

    cout << "Your Annual salary is =  " << annualSalary;
    cout << "\n\nIn 10 Year later you will earn : " << annualSalary * 12;

    system("pause>0");
    return 0;
}
