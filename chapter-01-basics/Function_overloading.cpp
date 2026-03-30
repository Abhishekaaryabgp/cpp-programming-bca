#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int sum(int a, int b)
{
    return a + b;
}
double su(double a, double b)           // functuion overloading
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    //cout << sum(2, 4) << endl; // For integer
    //cout << sum(2.2, 2.3) << endl;
    cout << sum(5, 5, 5);
    system("pause>0");
    return 0;
}
