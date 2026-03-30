#include <iostream>
using namespace std;
int main()
{
    int i, n = 0, n1 = 1, n3, num;
    cout << "Enter your number :" << endl;
    cin >> num;
    // cout << n << " " << n1 << " ";
    for (int i = 2; i < num; ++i)
    {
        n3 = n + n1;
        cout << n3 << " " << endl;
        n = n1;
        n1 = n3;
    }

    return 0;
}
