#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, d, e, m1, m2, m3, m4, m5;
    cout << "Enter Roll Number :" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << "\nEnter name :" << endl;
    char n1[20], n2[20], n3[20], n4[20], n5[20];
    fflush(stdin);
    //cout << "Enter Name :" << endl;
    cin.getline(n1, 20);
    cin.getline(n2, 20);
    cin.getline(n3, 20);
    cin.getline(n4, 20);
    cin.getline(n5, 20);

    fflush(stdin);
    cout << "\nEnter Marks :" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    cout << " Roll No    Name                  Marks" << endl;
    cout << "\n " << left << setw(5) << a << "      " << setw(20) << n1 << "  " << m1;
    cout << "\n " << left << setw(5) << b << "      " << setw(20) << n2 << "  " << m2;
    cout << "\n " << left << setw(5) << c << "      " << setw(20) << n3 << "  " << m3;
    cout << "\n " << left << setw(5) << d << "      " << setw(20) << n4 << "  " << m4;
    cout << "\n " << left << setw(5) << e << "      " << setw(20) << n5 << "  " << m5;

    system("pause>0");
    return 0;
}
