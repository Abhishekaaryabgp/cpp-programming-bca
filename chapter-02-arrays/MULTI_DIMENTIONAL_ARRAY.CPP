#include <iostream>
using namespace std;
int main()
{
    int row, coln;
    cout << "Enter Row and Column :" << endl;
    cin >> row >> coln;
    int **table = new int *[row]; // Allocation...
    for (int i = 0; i < row; i++)
    {
        table[i] = new int[coln];
    }
    table[1][2] = 2;
    for (int i = 0; i < row; i++)
    {
        delete[] table[i]; // deallocating...
    }
    delete[] table; // deleting one by one
    table = NULL;
    system("pause>0");
    return 0;
}
