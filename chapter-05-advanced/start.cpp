#include <iostream>
using namespace std;
template <class T> // T type
int sum(T x, T y)
{
    cout << "Enter Any thing" << endl;
    cin >> x;
    return (x + y);
}

int main()
{
    int a;
    cout << "\nResult Int " << sum(3, 4);
    cout << sizeof(a);
    system("pause>0");
    return 0;
}
// template detect auitomaticaly data types...
// you can also called generic ...