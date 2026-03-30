#include <iostream>
using namespace std;
template <typename T>
class Add
{
private:
    T a;
    T b;

public:
    Add() : a(0), b(0)
    {
    }
    void inp()
    {
        cout << "Enter something to add " << endl;
        cin >> a;
        cin >> b;
    }
    T add()
    {
        return a + b;
    }
};
int main()
{
    Add<int> obj;
    obj.inp();
    cout << "Your Sum is :" << obj.add() << endl;
    system("pause>0");
    return 0;
}