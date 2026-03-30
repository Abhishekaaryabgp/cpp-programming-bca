#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    void input()
    {
        cout << "Enter a number :" << endl;
        cin >> x;
    }
    void output()
    {
        cout << "X = " << x << endl;
    }
    friend void B::fun();
};
class B
{
    int y;

public:
    void input()
    {
        cout << "Enter Y: " << endl;
        cin >> y;
    }
    void fun();
};
void B::fun()
{
    int z;
    A ob1;
    input();
    ob1.input();
    // z = ob1.x + y;
    cout << "\n Sum :" << z << endl;
}

int main()
{
    B ob;
    ob.fun();

    system("pasue>0");
    return 0;
}
