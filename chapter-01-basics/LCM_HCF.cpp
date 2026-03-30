#include <iostream>
using namespace std;
int main()
{
    int a, b, hcf = 0, lcm, i, j;
    cout << "Enter a value of a: & b:" << endl;
    cin >> a >> b;
    for (int i = 2; i < a * b; i++)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            hcf = i;
        }
    }
    lcm = a * b / hcf;
    cout << "LCM = " << lcm << endl;
    cout << "HCF = " << hcf << endl;
    system("pause>0");
    return 0;
}
