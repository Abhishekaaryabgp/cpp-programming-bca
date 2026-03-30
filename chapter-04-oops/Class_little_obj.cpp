#include <iostream>
using namespace std;
class Base
{
public:
    int v1, v2, v3;
};
int main()
{
    Base obj;
    obj.v1 = 2;
    obj.v2 = 3;
    obj.v3 = 3;
    obj.v1 = obj.v2 == obj.v3;// If true this will print true (1) if wrong it will print false (0)
    cout << obj.v1 << endl;
    system("pause>0");
    return 0;
}
