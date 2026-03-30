#include <iostream>
using namespace std;
int main()
{
    void *var1;
    int num = 10, *var2;
    var1 = var2 = &num;
    var2++;
    var2++;
    cout << var1 << var2;
    system("pause>0");
    return 0;
}
