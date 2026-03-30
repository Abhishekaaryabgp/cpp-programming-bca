#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A(int _x = 0)
    {
        x = _x;
    }
    A operator+(A const &obj)
    {
        A result;
        result.x = x + obj.x;
        return result;
    }
};

int main()
{
    A obj1(3);
    A obj2(5);
    A result = obj1 + obj2;
    cout << "Result : " << result.x << endl;
}