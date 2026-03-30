#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file1;
    ifstream file2;
    cout << "Hey Welcome to my programme! ";
    file1.open("C://Users//Abhishek Aarya//Downloads//file1.txt", ios::in);
    file2.open("C://Users//Abhishek Aarya//Downloads//file2.txt", ios::in);
    if (file1 || file2)
    {
        cout << "You have Access!";
    }

    file1.close();
    file2.close();
    system("pause>0");
    return 0;
}
