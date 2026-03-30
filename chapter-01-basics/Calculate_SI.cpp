#include <iostream>
using namespace std;
int main()
{
    float p, r, t, SI;
    cout << "Enter A value for p :\n";
    cin >> p;
    cout << "Enter A second value for r :\n";
    cin >> r;
    cout << "Enter A Third value for t :\n";
    cin >> t;
    SI = (p * r * t) / 100;
    cout << "SIMPLE INTEREST is = " << SI;
    return 0;
}
