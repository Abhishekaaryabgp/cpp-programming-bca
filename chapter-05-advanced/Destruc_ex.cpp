#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }
    void disp()
    {
        cout << "X = " << x << endl;
    }
    ~A()
    {
        cout << "Destructor is called" << endl;
    }
};

main()
{
    A ob1(7);// Here the destructor is automaticaly called
    ob1.disp();
    system("pause>0");
    return 0;
}