#include <iostream>
using namespace std;

void Intro(string name, string City, int age) // passing parametre function
{
    cout << "Your name is " << name << endl;
    cout << "You are from " << City << endl;
    cout << "Your age is " << age << endl;
}

int main()
{
    string name1, house1;
    int age1;
    cout << "Enter Name :" << endl;
    cin >> name1;
    cout << "Enter City :" << endl;
    cin >> house1;
    cout << "Enter Age :" << endl;
    cin >> age1;
    Intro(name1, house1, age1);
    system("pause>0");
}
