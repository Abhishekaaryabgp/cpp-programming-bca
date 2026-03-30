#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n\nPrinting Heart With Star ****" << endl;
    int n, row, col;
    cout << "Dear User enter 6 to perform heart : " << endl;
    cin >> n;
    for (row = 0; row < n; row++)
    {

        for (col = 0; col < n + 1; col++)
        {
            if ((row == 0 && col % 3 != 0) || (row == 1 && col % 3 == 0) || (row - col == 2) || (row + col == 8))
            {

                cout << ("*");
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "I LOVE YOU ...";
    system("pause>0");
    return 0;
}
