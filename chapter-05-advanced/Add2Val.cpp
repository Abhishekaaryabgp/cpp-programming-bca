#include <iostream>
using namespace std;
template <class T>
T add(T a, T b) // return template add
{
    return (a + b);
}
string add(string a, string b)
{
    return (a + "  " + b);
}
int add(int a, int b) // exact form will be first priority
{
    return (a + b + 50);
}
int main()
{
    string s1 = "Abhishek";
    string s2 = "Aarya";
    cout << "\nSum = " << add(3, 4);
    cout << "\nSum = " << add(4.5, 6.8);
    cout << "\nSum = " << add('A', 'a');
    cout << "\nSum = " << add<string>("Abhishek", "Aarya");
    cout << "\nSum = " << add(s1, s2);
    return 0;
}
