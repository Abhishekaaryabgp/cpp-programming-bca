#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Quadratic Eq:\n";
    cin >> a;
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cin >> b;
    cin.ignore();
    cin >> c;
    cout << "A :" << a << "B :" << b << "C :" << c;
    float r1, r2;
    int d;
    d = b * b - (4 * a * c);
    if (d < 0)
    {
        cout << " Roots are imaginary :";
    }
    else if (d == 0)
    {
        cout << "\n Both real roots are same :";
        r1 = (float)-b / (2 * a);
        cout << "\n Root1 :" << r1 << " Root2 :" << r1;
    }
    else
    {
        cout << "\n Two diffrent real root :";
        r1 = (-b + sqrt(d)) / 2 * a;
        cout << "\n Root1  " << r1 << "\n Root2 : " << r2;
    }
    return 0;
}
