#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    string CollegeName;

public:
    void Input()
    {
        cout << "Enter your Roll No!" << endl;
        cin >> roll;
        cout << "Now enter the name :" << endl;
        cin >> name;
        cout << "Enter the College : " << endl;
        cin >> CollegeName;
    }
    void Output()
    {
        cout << "\nYour roll no is :" << roll << "\nYour name is :" << name << "\nYou College is :" << CollegeName << endl;
    }
};
class Sports
{
    int playerid;
    string game;

public:
    void Game()
    {
        cout << "\nEnter player Id :" << endl;
        cin >> playerid;
        cout << "Enter Your Game what game do you want to play :" << endl;
        cin >> game;
    }
    void output()
    {
        cout << "Your Game id is :" << playerid << endl;
        cout << "Your will be playing :" << game;
    }
};
int main()
{
    Student obj;
    obj.Input();
    obj.Output();
    Sports obj1;
    obj1.Game();
    system("pause>0");
    return 0;
}
