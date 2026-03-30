#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outf("item");
    cout << "enter items :"<<endl;
    char name[30];
    cin >> name;
    outf << name << "\n";

    cout << "enter cost :"<<endl;
    float cost;
    cin >> cost;
    outf << cost << "\n";

    outf.close();
    ifstream inf("item");
    inf >> name;
    inf >> cost;

    cout << "item Name : " << name << endl;
    cout << "Item Cost : " << cost << endl;
    system("pause>0");
    return cost;
}
