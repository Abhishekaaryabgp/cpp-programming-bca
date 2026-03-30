#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter the Number " << endl;
    try
    {

        if (!(cin >> x))
        {
            throw 1;
        }
        else if (!(cin >> y))
        {
            throw 2.0f;
        }
        else if (y == 0)
        {
            throw 1;
        }
        z = x / y;
        cout << "Divide " << z << endl;
    }

    catch (int x)
    {
        cout << "Div by Zero " << endl;
    }
    catch (float x)
    {
        cout << "Exception invalid x :" << endl;
    }
    catch (int x)
    {
        cout << "Exception invalid y :" << endl;
    }
    system("pause>0");
    return 0;
}
