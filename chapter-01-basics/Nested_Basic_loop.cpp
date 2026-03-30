#include <iostream>
using namespace std;
int main()
{
    int grade, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        do
        {
            cout << "grade " << i + 1 << ": " << endl;
            cin >> grade;
        } while (grade < 1 || grade > 5);
        sum += grade;
    }
    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / 2.0 << endl;

    system("pause>0");
    return 0;
}
