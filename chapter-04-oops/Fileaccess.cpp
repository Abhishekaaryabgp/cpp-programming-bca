#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[20];
    ifstream file("Abc.txt");
    //cout << "enter char :";
    file.read((char *)name, 20);
    cout << " Char = " << name;
    return 0;
}
