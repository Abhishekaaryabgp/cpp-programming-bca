#include <iostream>
using namespace std;
class Var
{
public:
    int i, j, k, p;
};
int main()
{
    Var v;
    v.i = 1;
    v.j = 2;
    v.k = 3;
    v.p = 4;
    v.p = (v.i, v.j, v.k);
    cout << v.p;
    return 0;
}
