#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter the number :";
    cin >> num;

    if (num == 0)
        cout << "Zero Digit.\n";
    else
    {
        if (num < 0)
        {
            num = -1 * num;
            cout << "Number is Negative." << endl;
        }

        int counter = 0;
        while (num > 0)
        {
            num /= 10;// Here The Number Limit is containing.
            counter++;
        }
        cout << "Number Contains :" << counter << "digits" << endl;
    }

    system("pause>0");
    return 0;
}
