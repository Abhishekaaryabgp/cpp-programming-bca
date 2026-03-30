#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("12345");
    string s2("abcde");
    cout << "Orignal strings are :";
    cout << "S1: " << s1 << "S2: " << s2 << "\n\n";
    cout << "Place S2 inside S1 ";
    s1.insert(4, s2);
    cout << "Modified S1 :" << s1 << "\n\n";

    // removing characters in a strings
    cout << "Remove 5 charaters from S1" << endl;
    s1.erase();
    cout << "Now S1 " << s1 << endl;
    cout << "Replace Middle 3 characters in S2 with S1" << endl;
    s2.replace(1, 2, s1);
    cout << "Now S2:" << s2 << endl;
    system("pause>0");
    return 0;
}
