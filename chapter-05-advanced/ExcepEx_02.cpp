#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Number " << endl;
    cin >> x;
    try
    {

        if (x > 0)
        {
            throw 1;
        }
        else if (x < 0)
        {
            throw 2.0f;
        }
        else
        {
            throw 'A';
        }
    }
    catch (int x)
    {
        cout << "Exception is Posetive: " << endl;
    }
    catch (float x)
    {
        cout << "Exception is Negative :" << endl;
    }
    catch (char x)
    {
        cout << "Exception is char :" << endl;
    }
    system("pause>0");
    return 0;
}
// multiple catch statements