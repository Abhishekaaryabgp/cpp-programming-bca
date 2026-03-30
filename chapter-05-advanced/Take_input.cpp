#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    char name[30];
    ofstream fout;
    fout.open("C:\\Users\\Abhishek Aarya\\Documents\\VS PROJECT\\proj.txt", ios::app);
    cout << "Enter Your name sir..." << endl;
    cin >> name;
    cout << "Your name is :" << name;
    fout.close();
    system("pause>0");
    return 0;
}
