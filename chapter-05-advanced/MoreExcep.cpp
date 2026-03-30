#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Dear Enter Enter Two Number :" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b; // throwing exception
        else
        {
            c = a / b;
            cout << "Result is " << c << endl;
        }
    }
    // try block say that where the exception can be possible
    catch (float ex) // handling the exception in catch
    {
        cout << "Exception is Genereted Sorry! Div With " << ex << " not possible... " << endl;
    }

    system("pause>0");
    return 0;
}
// and the example you are going to write is diide by zero ...