#include <iostream>
using namespace std;
int main()
{
    int i;
    float a[10], value, total;

    cout << "Enter 10 Real no" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> value;
        a[i] = value;
    }
    total = 0.0;
    for (int i = 0; i < 10; i++)
    {
        total = total + a[i] * a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << a[i];
        cout << "\n"<< total;
    }

    system("pause>0");
    return 0;
}
