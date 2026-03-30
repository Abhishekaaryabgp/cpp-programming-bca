#include <iostream>
using namespace std;
// below the base class implementation
class base_vir
{
    int val;

public:
    base_vir() // constructor...
    {
        val = 21;
    }
    virtual void disp() // remember the vertual fun always possible in base class
    {
        cout << "Displaying Value: " << val << endl;
    }
};
class child_vir : public base_vir // inherited from base class
{
    int val2;

public:
    child_vir()
    {
        val2 = 25;
    }
    void disp()
    {
        cout << "Displaying Value: " << val2 << endl;
    }
};
int main()
{
    base_vir obj, *ptr; // creating base classes object and pointer.
    child_vir obj1;     // crating simple child object
    ptr = &obj;         // reference to base class using pointer
    ptr->disp();        // now pointing to display function of child class using pointer.

    return 0;
}
