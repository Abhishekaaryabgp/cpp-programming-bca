#include <iostream>
#include <string>
using namespace std;
int main()
{
    string file = "Abhishek";
    cout << "The length of the file is :" << file.length() << endl;
    cout << file << endl;
    string s1;
    string s2("Abhishek");
    string s3("Aarya");
    s1 = s2;
    cout << "S1 = " << s1 << endl;
    s1 = "Standard C++";
    cout << "Now S1 = " << s1 << endl;
    string s4(s1);
    cout << "S4 = " << s4 << endl;
    cout << "Enter a string \n";
    cin >> s4;
    cout << "Now S4 = " << s4 << endl;
    s1 = s2 + s3;
    cout << "S1 finally contains: " << s1 << endl;
    system("pause>0");
    return 0;
}
