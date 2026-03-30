#include <iostream>
using namespace std;
class Number
{
    int x;
    int y;

public:
    void input()
    {
        cout << "Enter X :" << endl;
        cin >> x;
        cout << "Enter Y :" << endl;
        cin >> y;
    }
    void output()
    {
        cout << "\nX = " << x << "\nY = " << y;
    }
    void operator--(){
        ++x;
        --y;
    }
   /* void incr()
    {
        x++;
        cout <<"\n\nAfter Increment The Post Fix is:" << endl;
        y++;
    }*/
};

int main()
{
    Number n;
    n.input();
    n.operator--();
    n.output();
    system("pause>0");
    return 0;
}
