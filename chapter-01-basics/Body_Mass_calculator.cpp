#include <iostream>
using namespace std;
int main()
{
    float weight, height, BMI; // BMI -> Body Mass Indigator:
    cout << "\nPlease Enter Your Weight in (KG) = ";
    cin >> weight;
    cout << "Height in (Meter) = ";
    cin >> height;
    BMI = weight / (height * height); // BMI Formula...

    if (BMI < 18.5)
    {
        cout << "\nYou are Under Weight! ";
    }
    else if (BMI > 25)
    {
        cout << "\nYou are over weight!" << endl;
    }
    else
    {
        cout << "\nYou are Normal weight:" << endl;
    }
    cout << "YOUR BMI IS :" << BMI << " ";

    system("pause>0");
    return 0;
}
