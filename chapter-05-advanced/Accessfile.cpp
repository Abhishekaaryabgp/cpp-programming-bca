#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[10];
    ifstream fin;
    fin.open("C:\\Users\\Abhishek Aarya\\Documents\\VS PROJECT\\proj.txt", ios::in);
    fin >> name;
    cout << "Name is :" << name;
    fin.close();
    system("pause>0");
    return 0;
}
