#include <iostream>
using namespace std;
int main()
{
    int baseaddress, index, size, array;
    cout << "Enter your compiler size :\n";
    cin >> size;
    array = baseaddress + index * size;//This is the formula of an array .
    cout << "Array = " << array;

    return 0;
}
