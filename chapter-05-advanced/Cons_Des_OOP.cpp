#include <iostream>
using namespace std;
class Headphone
{
public:
    int modelNo;
    string name;
    int price;
    string color;
    void getinfo()
    {
        cout << "Enter Headphone name: " << endl;
        getline(cin, name); // getine eis used to take string input including white spaces

        cout << "Now enter model No: " << endl;
        cin >> modelNo;
        cin.ignore(); // this will help you to take more that  one input
        cout << "Enter Color: " << endl;
        getline(cin, color);

        cout << "And Finally enter price in Rupees: " << endl;
        cin >> price;
    }
    void Showinfo()
    {
        cout << "\n\nHeadphone name is: " << name << endl;
        cout << "Model No: " << modelNo << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Headphone obj;
    obj.getinfo();
    obj.Showinfo();
    system("pause>0");
    return 0;
}
// You have to modify this program.
