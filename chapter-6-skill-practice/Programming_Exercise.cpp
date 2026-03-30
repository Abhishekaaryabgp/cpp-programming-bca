#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string item_name, item_code, item_cost;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter item name !" << endl;
        cin >> item_name;
        cout << "Enter item code!" << endl;
        cin >> item_code;
        cout << "Item Cost:" << endl;
        cin >> item_cost;
    }

    // the avobe items will be read from the keyboards ...
    cout << "<-----------------------------------------------------" << endl;
    cout
        << "NAME\t\t\t"
           "CODE\t\t\t"
           "COST"
        << endl;

    cout << item_name << "\t\t\t " << item_cost << "\t\t\t " << item_code << endl;

    cout
        << "<-----------------------------------------------------" << endl;
    system("pause>0");
    return 0;
}
