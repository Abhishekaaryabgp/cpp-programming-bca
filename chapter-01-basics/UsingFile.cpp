#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream PoemFile;
    /* PoemFile.open("Akk.txt",ios::out);// Write mode
     if (PoemFile.is_open())
     {
         PoemFile<<" Hey Baby...."<<endl;
     }*/

    PoemFile.open("Akk.txt", ios::in); // read mode
    if (PoemFile.is_open())
    {
        string line;
        while (getline(PoemFile, line))
        {
            cout << line << endl;
        }
    }

    PoemFile.close();
    system("pause>0");
    return 0;
}
