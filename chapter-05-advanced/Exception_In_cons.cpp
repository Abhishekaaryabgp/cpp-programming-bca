#include <iostream>
#include <string.h>
using namespace std;
class Num
{
    float x;

public:
    Num(float a)
    {
        if (a == 0)
        {
            throw Num(); // calling constructor in throw
        }
        else
        {
            x = a;
        }
    }
    Num() // no argu constructor
    {
    }
    ~Num() // destructor
    {
        cout << " Destructor called ..." << endl;
    }
    void fun()
    {
        x = x + 10;
    }
    void disp()
    {
        cout << " X =  " << x << endl;
    }
};

int main()
{
    try
    {
        Num obj(5.5);
        cout << "\n Before Calling Fun :"
             << endl;
        obj.disp();
        obj.fun();
        cout << " After Calling Fun :" << endl;
        obj.disp();
        obj.~Num();

        Num obj1(0);
        // obj1.disp();
    }
    catch (...) // any type
    {
        cout << " Exception occured ..." << endl;
    }
    system("pause>0");
    return 0;
}
