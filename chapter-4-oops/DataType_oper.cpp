#include <iostream>
using namespace std;
class enumration
{
public:
    enum p
    {
        a,b,c,f = 32767,y
    };
    
};
int main()
{
    enumration en;
    cout << en.a;
    system("pause>0");
    return 0;
}
