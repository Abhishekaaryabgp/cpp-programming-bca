#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Three Values For Swap :\n";
    cin >> a >> b;
    a = a + b;
    b = a - b;// Two value swap program.....
    a = a - b;

    cout << "After Swaping the value of A & B is";
    cout << "\nA = " << a << "\nB = " << b;
    system("pause>0");
    return 0;
}
