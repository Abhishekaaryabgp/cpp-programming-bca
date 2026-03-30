#include <iostream>
using namespace std;
int main()
{
    int n, a, r = 0;
    cout << "Enter any number to get reverse :\n";
    cin >> n;
    while (n >= 1)
    {
        a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
        cout << r;

    return 0;
}
