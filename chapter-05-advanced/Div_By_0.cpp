#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a and b !" << endl;
    try
    {
        if (cin >> a && cin >> b)
        {
        }
        else
        {
            throw(2.5f);
        }
        if (b == 0)
        {
            throw(1);
        }
        c = a / b;
        cout << "\nResult = " << c << endl;
    }
    catch (int x)
    {
        cout << "Div by zero not possible ..." << endl;
    }
    catch (float x)
    {
        cout << "Invalid Data Type .." << endl;
    }
    return 0;
}
