// Passing default arguments ://
#include <iostream>
using namespace std;
int sum(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0)
{
    return (a + b + c + d + e);
}
int multi(int a = 1, int b = 1, int c = 1, int d = 1, int e = 1)
{
    return (a * b * c * d * e);
}
int sub(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0)
{
    return (a - b - c - d - e);
}
float dav(float a = 1, float b = 1, float c = 1, float d = 1, float e = 1)
{
    return (a / b / c / d / e);
}
int main()
{
    cout << "\n Sum = " << sum(20, 22);
    cout << "\n Sum (2) = " << sum(23, 11);

    cout << "\n Mul = " << multi(2, 3);
    cout << "\n Mul (2) = " << multi(3, 150);

    cout << "\n sub = " << sub(20, 22);
    cout << "\n sub (2) = " << sub(23, 11);

    cout << "\n dav = " << dav(20, 22);
    cout << "\n dav (2) = " << dav(23, 11);

    sum();
    return 0;
}
