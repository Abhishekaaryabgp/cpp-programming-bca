#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0, n, i;
    cout << "\nEnter the number to get FIBONACCHI series :\n";
    cin >> n;
    cout << a << b;
    for (i = 0; i <= n; i++)
    {
        c = a + b;
        if (c < n)
        {
            cout << "\nThe Fibonacch is Series = " << c;
        }
        a = b;
        b = c;
    }
    system("pause>0");

    return 0;
}
