#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int count = 0;
    char c;
    cout << "Enter a no or character anything you want:" << endl;
    cin.get(c);
    while (c != 0)
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"No of Character is " "\n "<<count<<endl;
    return 0;
}
