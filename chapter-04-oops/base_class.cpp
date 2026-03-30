#include <iostream>
#include <conio.h>
using namespace std;
class base
{
private:
    char c;
    int i;
    float f;
    double d;
    int *ptr;

public:
    base();
    base(char a, int b, float c, double e);
    void disp();
};
base::base()
{
}
base::base(char a, int b, float c, double e)
{
    c = a;
    i = b;
    f = c;
    d = e;
}
void base::disp()
{
    cout << "\nsizeof(c)" << sizeof(c) << endl;
    cout << "\nsizeof(i)" << sizeof(i) << endl;
    cout << "\nsizeof(f)" << sizeof(f) << endl;
    cout << "\nsizeof(d)" << sizeof(d) << endl;
    cout << "\nsizeof(base)" << sizeof(base) << endl;
}
int main()
{
    base b, c('a',2,3,6.3);
    cout << "\n(in main)sizeof(base) = " << sizeof(base) << endl;
    b.disp();
    cout << "\n(in main)sizeof(b) = " << sizeof(b) << endl;
    c.disp();
    cout << "\n(in main)sizeof(c) = " << sizeof(c) << endl;
    system("pause>0");
    return 0;
}
