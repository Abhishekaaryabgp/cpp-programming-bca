#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void inputA()
    {
        cout << "Enter A :";
        cin >> a;
    }
    void outputA()
    {
        cout << "\n A :" << a;
    }
};
class B
{
    int b;

public:
    void inputB()
    {
        cout << "Enter B:";
        cin >> b;
    }
    void outputB()
    {
        cout << " B:" << b;
    }
};

class C
{
    int c;

public:
    void inputC()
    {
        cout << "Enter C :";
        cin >> c;
    }
    void outputC()
    {
        cout << "Enter A :" << c;
    }
}; 
int main()
{

    A obj;
    obj.inputB();
    obj.outputB();
    return 0;
}
