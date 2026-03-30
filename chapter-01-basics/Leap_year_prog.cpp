#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    char option;
    do
    {
        cout << "\nEnter The Year So I can Chek The Year is leap year or not !\n";
        cin >> n;

        if (n % 4 == 0)
        {
            cout << "Year is Leap Year :" << endl;
        }
        else
        {
            cout << "Year is Not Leap Year !" << endl;
        }
        cout << "\nDo you want to continue :" << endl;
        cin >> option;
    } while (option == 'y' || option == 'n');
    system("pause>0");
    return 0;
}
