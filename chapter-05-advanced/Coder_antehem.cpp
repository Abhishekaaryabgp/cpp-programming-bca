#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Anthem
{
public:
    string food;
    int i;
    float t;

    void eat() // this is eating Schedule according to the food
    {
        cout << "Enter todays food Schedule :" << endl;
        cin >> food;
    }
    void Sleep()
    {
        cout << "Enter the timing when you want to sleep today at what timing :" << endl;
        cin >> t;
    }

    void code() // this function will identify who the hell are you in this case you are a coder.
    {
        cout << "\n*** I AM A FUCKING PROGRAMMER ! AASTAMESTA BABEY ***\n"
             << endl;
    }

    void repeat() // this will repeat the anthem
    {
        for (i = 1; i < 10; i++)
        {
            cout << "\nWhile Aive! eat() | sleep() | Code() | Repeat() || YOU CAN DO IT COME ON AARYA ||\n"
                 << endl;
        }
    }

    void show() // for show the avove function.
    {
        cout << "\nSir today you will be eat : " << food << " : And it will be delicious." << endl;
        cout << "\nDear sir Your sleeping time is : " << t << " PM: O`Clock\n";
    }
};
int main()
{
    Anthem obj;
    obj.eat();
    obj.Sleep();
    obj.show();
    obj.code();
    obj.repeat();

    system("pause>0");
    return 0;
}
// you have to repeat at like mili second.. so here our basic programmer anthem is ready.