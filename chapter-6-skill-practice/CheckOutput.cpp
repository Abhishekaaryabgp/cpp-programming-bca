#include <iostream>
using namespace std;
int main()
{
    char *str = "p";
    cout << ++*(str++) << "\t" << str;
    return 0;
}
