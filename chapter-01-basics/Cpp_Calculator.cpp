#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, n1, n2, result;
    float p, r, t, SI;
    cout << "\n\t\t\t\t\t Hey My Name is ||Abhishek aarya||";
    cout << "\n This is my basic calculator :\n In this calculator you can perform some basic calculation for example :";
    cout << "\n Addintion :\n Substraction :\n Multiplication :\n Division :\n Modulas :\n Simple Interest : \n\n\n ";
    char option;
    do
    {
        cout << "\t\t\t\t\t ***  Dear user What Operations Do You Want to perform  ***:\n\n\n";
        cout << "If You want to perform addition(+). So press 1 :\n";
        cout << "If You want to perform Substraction(-). So press 2 :\n";
        cout << "If You want to perform Multiplication(*). So press 3 :\n";
        cout << "If You want to perform Division(/). So press 4 :\n";
        cout << "If You want to perform Modulas(%). So press 5 :\n";
        cout << "If You want to perform Simple Interest(@). So press 6 :\n\n";
        // cout << "If You want to perform Or Chek Date Is LeapYear or Not(@). So press 7 :\n";
        cin >> n;

        cout << "Enter Your First Number :\n";
        cin >> n1;

        cout << "Enter Your Second Number :\n";
        cin >> n2;

        switch (n)
        {
        case 1:
            result = n1 + n2;
            cout << "Your Addition Result is :" << result;
            break;
        case 2:
            result = n1 - n2;
            cout << "Your  Result is :" << result;
            break;
        case 3:
            result = n1 * n2;
            cout << "Your  Result is :" << result;
            break;
        case 4:
            result = n1 / n2;
            cout << "Your Result is :" << result;
            break;
        case 5:
            result = n1 % n2;
            cout << "Your Modulas Result is :" << result;
            break;
        case 6:
            cout << "Enter A value for p :\n";
            cin >> p;
            cout << "Enter A second value for r :\n";
            cin >> r;
            cout << "Enter A Third value for t :\n";
            cin >> t;
            result = (p * r * t) / 100;
            cout << "Your Simple Interst Result is :" << result;
            break;

        default:
            cout << "Invalid Input ! Sorry Try again:\n";
            break;
        }
        cout << "\n\t\t\t\t\t *** Do You Want To Continue (Yes Or No) ***\n";
        option = getche();

    } while (option == 'y');
    return 0;
}
