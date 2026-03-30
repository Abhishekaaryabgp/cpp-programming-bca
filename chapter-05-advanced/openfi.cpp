#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    fstream file;
    file.open("C:\\Users\\Abhishek Aarya\\Downloads\\Telegram Desktop\\abhi.txt", ios::in);
    cout << "Arigato Gozaimas ..." << endl;
    if (file.is_open())
    {
        {
            string word;
            while (getline(file, word))
            {
                cout << word << endl;
            }
            file.close();
        }
    }
    system("pause>0");
    return 0;
}