#include <iostream>
using namespace std;
class Animals // Class is a user defined data type and it does not take memory and it is also called the blue print of the object
{
public:          // access specifier
    string name; // data member or member variable
    string description;

    void getName() // member function
    {
        cout << " Enter the name of that animal." << endl;
        cin >> name;
        cout << " Now enter the description for that animal." << endl;
        cin >> description;
    }
    void Output() // member function
    {
        cout << "ThE name of that animal is " << name << endl;
        cout << description;
    }
};
int main()
{
    Animals ob1;   // object .. is creating ...
    ob1.getName(); // member function calling//
    ob1.Output();
    system("pause>0");
    return 0;
}
