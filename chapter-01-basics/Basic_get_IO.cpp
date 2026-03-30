#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    char a;
    cout << "input :";
    cin.get(a);
    while (a != '\n')
    {
        cout.put(a);
        count++;
        cin.get(a);
    }
    cout << "Number of Character is :\n" << count;
    system("pause<0");
    return 0;
}
