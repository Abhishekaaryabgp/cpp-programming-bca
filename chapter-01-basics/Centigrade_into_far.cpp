#include <iostream>
using namespace std;
int main()
{
    float c, f;
    cout << "Enter Temp In Centigrade  :\n";
    cin >> c;
    f = (1.8 * c) + 32;
    cout << "Fahrenheit = " << f;
    return 0;
}
