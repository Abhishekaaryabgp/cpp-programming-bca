#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("ITEM");
    char name[20];
    cout << "Enter Item Name :" << endl;
    cin >> name;
    fout << name << "\n";

    float cost;
    cout << "Enter item cost :" << endl;
    cin >> cost;
    //cout << "Item Cost is :" << cost << " Rupees...";
    fout.close();

    ifstream inf("item");
    inf >> name;
    inf >> cost;
    cout << "Item Name is :" << name;
    cout << "\n";
    cout << "Item Cost is :" << cost << " Rupees..."<<endl;
    inf.close();
    system("pause>0");
    return 0;
}
