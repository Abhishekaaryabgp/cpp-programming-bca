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
    // Number Sum(Number n)
    // {
    //     Number temp;
    //      temp;
    //      x + n.x;
    //      temp y = y + n.y;
    //     return temp;
    // }
    // Number operator+(Number n)
    // {
    //     Number temp;
    //     // temp x + n.x;
    //     // temp y + n.y;
    //     return temp;
    // }
};

int main()
{
    Number n1, n2, n3;
    n1.input();
    n2.input();
    // n3 = n1 + n2;
    n1.output();
    n2.output();
    n3.output();

    system("pause>0");
    return 0;
}
