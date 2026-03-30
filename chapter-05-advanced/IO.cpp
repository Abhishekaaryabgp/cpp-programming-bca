#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f1;
    ofstream f2;
    f1.open("C://Users//Abhishek Aarya//Downloads//file1.txt", ios::app);
    f2.open("C://Users//Abhishek Aarya//Downloads//file2.txt", ios::app);
    if (!f1 || !f2)
    {
        cout << "Error !!! " << endl;
    }
    f1 << "Hello Dear !";
    f2 << "Bla Bla Bla!";
    cout << "Mission Successful!" << endl;
    f1.close();
    f2.close();
    system("pause>0");
    return 0;
}
