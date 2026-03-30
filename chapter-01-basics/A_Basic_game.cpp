// Character guesing game...

#include <iostream>
using namespace std;
int main()
{
    string hostUserNum, guestUserNum;
    cout << "\t\t\t\t\tHost Turn:";
    cin >> hostUserNum;
    system("cls");
    cout << "\t\t\t\t\tGuest:";
    cin >> guestUserNum;
    (hostUserNum == guestUserNum) ? cout << "\t\t\t\t\tCorrect:" : cout << "\t\t\t\t\tIncorrect!";
    /*if (hostUserNum == guestUserNum)
        cout << "\t\t\t\t\tCorrect:";
    else
        cout << "\t\t\t\t\tIncorrect!";
    */
    //Both are valid// this is unique method...ternary operator is also important

    system("pause>0");
    return 0;
}
