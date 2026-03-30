#include <iostream>
#include <conio.h>
using namespace std;
void ShowMenu()
{
    cout << "::::::::::::::::::: MENU BAR :::::::::::::::::::" << endl;
    cout << "Press 1 to Chek Balance..." << endl;
    cout << "Press 2 to Deposit Balance..." << endl;
    cout << "Press 3 to Withdraw Balance..." << endl;
    cout << "Press 4 to Exit..." << endl;
}
int main()
{
    char option;
    do
    {
        ShowMenu();
        float Balance = 500000; // this is default balance
        char ch;
        cin >> ch;
        system("cls"); 
        switch (ch)
        {
        case '1':
            cout << "You have " << Balance << " Rupees " << endl;
            break;
        case '2':
            cout << "Deposit Amount..." << endl;
            float money;
            cin >> money;
            Balance += money;
            cout << "Your money has been deposited successully..." << endl;
            cout << "Now You have " << Balance << " Rupees. " << endl;
        case '3':
            cout << "Withdraw Amount..." << endl;
            float Withdraw;
            cin >> Withdraw;
            if (Withdraw <= Balance)
            {
                Balance -= Withdraw;
            }
            else
            {
                cout << "Not Money Enough!" << endl;
            }
           
            cout << "Now You have " << Balance << " Rupees. " << endl;
            break;
        case '4':
            exit(0);
        }
    } while (option != '4'); 
    system("pause>0");
    return 0;
}
