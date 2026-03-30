#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 66, b = 69;
    cout << "after swap: " << a << " ~ " << b << endl;
    swap<int>(a, b);
    cout << "after swap: " << a << " ~ " << b << endl;

    // system("pasues>0");
    return 0;
}
