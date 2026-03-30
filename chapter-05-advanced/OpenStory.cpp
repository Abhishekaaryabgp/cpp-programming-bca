#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
    fstream file;
    file.open("D:\\Images And Memories\\IMPORTANT DOCUMENTS\\In 2 Year What did You Learn From Your Baby.txt", ios::in);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }

    system("pause>0");
    return 0;
}
