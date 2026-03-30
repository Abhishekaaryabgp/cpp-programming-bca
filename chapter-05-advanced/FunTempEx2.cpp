#include <iostream>
using namespace std;
template <class T>
// crating function template
T funTemp(T x, T y)
{
    return x * y;
}
// you can create more than one template funtion template but using difftent name
template <class M> // for ex here we are usin M and avobe we used T and alwaye use Template header
M BoolFun(M a, M b)
{
    return a == b;
}

int main()
{
    cout << "Integer : " << funTemp(99, 2) << " :  Integer " << endl;
    cout << "Floating : " << funTemp(44.3, 41.2) << " : Floating Number " << endl;
    cout << "Booleans : " << BoolFun(2, 55) << " : Booleans " << endl;
    system("pause>0");
    // in cpp system("pause>0"); creates vulnerbilities
    return 0;
}