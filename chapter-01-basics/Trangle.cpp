#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter The Number :";
    cin >> a >> b >> c;

    if (a == b && b == c)//If a is equal too b & b is eaualto c.
    {
        cout << "\n Equalatral Trangle :";
    }
    else if (a != b && a != c && b != c)//If a is not equalto b & elseIf a is not equalto c. else If b is not equalto c. 
    {
        cout << "\n Scalene Trangle :";
    }
    else
    {
        cout << "Iso Scalene Trangle";// Else Print This Line...
    }
    return 0;
}
