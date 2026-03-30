#include <iostream>
using namespace std;
class Base_Pur_vir // crating base virtual function class
{
protected:
    // creating a new instance in protected
    int a;

public:
    // bewlow the pure virtual function is created remember pvirtual function does not have any body and it should be initilized using zero 0 with keyword virtual.
    virtual void disp() = 0;
};
class child_pure_vir : public Base_Pur_vir
{
public:
    child_pure_vir(int x)
    {
        x = a;
    }
    void disp()
    {
        cout << "child_pure_virtual successfully called Arigato gozaimas :";
    }
};
int main()
{
    Base_Pur_vir *obj; // object not possibel in abstract class as we know we can call abstract class as pure virtual
    child_pure_vir obj1(3);
    obj = &obj1;
    obj->disp();
    system("pause>0");
    return 0;
}
