#include <iostream>
using namespace std;
class Abs
{
private: // here it is private and working succsessfully
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout << "a: " << a;
        cout << "b: " << b;
    }
};
int main()
{
    Abs ob;
    ob.set(2, 3);
    ob.disp();
    system("pause>0");
    return 0;
}
