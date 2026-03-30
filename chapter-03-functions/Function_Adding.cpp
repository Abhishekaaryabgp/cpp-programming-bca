#include <iostream>
using namespace std;

void Sum(int a,int b)//Here you know how to call a function
{
    int c = a + b;
    cout << "\nSum = :"<<c;
}
int main()
{
    Sum(88,32);// Here the function is called
    Sum(5,589738752);// Here the function is called
    system("pause>0");
    return 0;
}
