#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data;
    ifstream f1;
    ofstream f2;
    f1.open("data.txt", ios::in);
    f1 >> data;
    cout << data << endl;

    system("pause>0");
    return 0;
}
