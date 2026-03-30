#include <iostream>
using namespace std;
int main()
{
    int dd, mm, yy;
    cout << "Enter DOB :\n";
    cin >> dd;
    cin.ignore();//IgnoreFunction\\
    cin >> mm;
    cin.ignore();
    cin >> yy;
    cin.ignore();
    cout << dd << "-" << mm << "-" << yy;
    return 0;
}
