#include <iostream>
#include <conio.h>
using namespace std;

bool isPrimeNum(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    int ch;
    bool isPrimeFlag = isPrimeNum(n);
    char option;
    do
    {

        cout << "\nEnter a number ..." << endl;
        cin >> n;
        if (isPrimeFlag)
        {
            cout << "Prime number" << endl;
        }
        else
        {
            cout << "Not prime number!" << endl;
        }
        cout << "Dear user Do you want to continue ...";
        option = getche();
    } while (option == 'y');
    system("pause>0");
}
