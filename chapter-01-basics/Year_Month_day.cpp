#include <iostream>
using namespace std;
int main()
{

    int year, month;
    char again;
    cout << "Enter year : " << endl;
    cin >> year;
    cout << "Enter month : " << endl;
    cin >> month;

    do
    {
        switch (month)
        {
        case 2:
            (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) ? cout << "29 day month:" << endl : cout << "28 days month:" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days month" << endl;
            break;
        case 1: // Here Your are thinking below this cases how this will run so the reason is .
        case 3: // And also you didnot puted the break here.
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days month" << endl; // here you implemented the logic so thats why the whole code will run .
            break;
        default:
            cout << "Invalid :" << endl;
            break;
        }

        if (year % 4 == 0)
        {
            cout << "Year is leap year" << endl;
        }
        else
        {
            cout << "Year is not leap year" << endl;
        }
        cout << "Do you want to continue? " << endl;
        cin >> again;
    } while (again == 'y' || again == 'y');

    system("pause>0");
    return 0;
}
