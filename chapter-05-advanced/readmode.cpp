#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("C:\\Users\\Abhishek Aarya\\Downloads\\Telegram Desktop\\Raja.txt", ios::out);
    if (file.is_open())
    {
        string word;
        while (getline(file, word))
        {
            cout << word << endl;
        }
        file.close();
    }
    system("pause>0");
    return 0;
}