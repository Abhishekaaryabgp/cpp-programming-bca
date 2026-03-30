#include <iostream>
using namespace std;
int factorial(int n); // recursive function calling itself..
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << "Factiorial of " << n << " = " << factorial(n) << endl;
    system("pause>0");
    return 0;
}
int factorial(int n) //recursivecalling...
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
        return 1;
}

// Jai MAA SWARASWATI ...