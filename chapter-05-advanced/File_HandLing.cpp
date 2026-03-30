#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;
    ifstream f1;
    ofstream f2;
    f1.open("data.txt", ios::in);
    f2.open("data.txt", ios::out);
    if (f1 || f2)
    {
        cout << "Error !";
        return 0;
    }
    while (f1 >> data)
    {
        f2 << data << "\n";
    }
    f1.close();
    f2.close();

    system("pause > 0");
    return 0;
}
