#include <iostream>
using namespace std;
class base
{
public:
    // creating pure_virtual when you initilize with zero it will be pure virtual
    virtual void pvShow()
    {
        int a, b;
        cout << "Enter  a :" << endl;
        cin >> a;
        cout << "Enter b :" << endl;
        cin >> b;
        cout << "The Sum od a and b will be : " << a + b << endl;
    }
};
class child : public base
{
public:
    void disp()
    {
        cout << "Child Function displaying..." << endl;
    }
};

int main()
{
    base *obj = new child();
    obj->pvShow();
    child a;
    a.disp();
    system("pause>0");
    return 0;
}