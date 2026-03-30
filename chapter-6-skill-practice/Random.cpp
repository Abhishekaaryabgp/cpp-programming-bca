#include <iostream>
using namespace std;
int main()
{
    int i, j, k, row, sp;
    cout << "Enter Number of Rows: " << endl;
    cin >> row;
    cout << "Printig test.... " << endl;
    for (int i = 1, k = 0; i <= row; ++i, k = 0)
    {
        for (sp = 1; sp <= row - i; ++sp)
        {
            cout << " Fuck You ! World";
            ++k;
        }
        cout << endl;
    }

    system("pause>0");
    return 0;
}
