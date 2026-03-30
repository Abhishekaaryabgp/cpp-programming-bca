#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int dd, mm, yy;
    cout << "\nEnter your date of birth :" << endl;
    cin >> dd;
    cin.ignore();
    cin >> mm;
    cin.ignore();
    cin >> yy;

    cout << "\nYour Date of Birth is :" << dd << "/" << setw(2) << setfill('0') << mm << "/" << yy;
    system("pause>0");
    return 0;
}
