#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    try
    {
        if (n <= 0)
        {
            throw "Invalid input No Must be Greater than zero !";
        }
        cout << "You Enter Number ..." << n;
    }
    catch (const char *ex)
    {
        cout << "Error: " << ex << endl;
    }
    system("pause>0");
    return 0;
}