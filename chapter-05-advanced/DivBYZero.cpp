#include <iostream>
#include <exception>
using namespace std;
double division(int x, int y)
{
    if (y == 0)
    {
        throw "Error aaya !";
    }
    return (x / y);
}
int main()
{
    int x = 23;
    int y = 20;
    double z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    system("pause>0");
    return 0;
}
