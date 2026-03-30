// The basic goal of that program is to create and binding error program.
#include <iostream>
using namespace std;
class Array
{
    int x[10], *y;

public:
    LoopCpr()
    {
        for (int i = 0; i < 10; i++)
        {
            x[i] = i;
        }
    }
    void Printout()
    {
        y += 5;
        cout << "Value is " << *y << endl;
    }
};
int main()
{
    Array ob;
    ob.printout();

    system("pasue>o");
    return 0;
}
