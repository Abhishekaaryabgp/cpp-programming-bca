#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A()
    {
        x = 7;
    }
    friend void disp(A ob);
    ~A()
    {
        cout << "Destructor is called" << endl;
    }
};
    void disp(A ob){
        cout << "X = "<<ob.x << endl;
    }

main()
{
    A ob1;  // Here the destructor is automaticaly called
    disp(ob1);{
        A ob1;
        disp(ob1);
    }
    system("pause>0");
    return 0;
}