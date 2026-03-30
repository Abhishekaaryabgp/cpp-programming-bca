#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    char a[20];
    char b[15];
    cout << "Enter a char :\n";
    cin.get(a, 5);
    cin.get(b, 8);
    cout << "Character :" << a << "\nB = " << b;
    return 0;
}
