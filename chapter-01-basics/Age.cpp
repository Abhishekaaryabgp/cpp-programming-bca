#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "How old are you ?" << endl; // endl mean also a new line ...
    cin >> age;
    {
        cout << "In 10 Year Later you will be :" << age + 10;
    }

    system("pause>0"); // It will not show the path on the run command palate..
    return 0;
}
