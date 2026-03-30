#include <iostream>
using namespace std;
class Ab
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "\nEnter the two no :\n";
        cin >> a >> b;
    }
    void output()
    {
        cout << "\nA = " << a << ",B = " << b;
    }
};

class Xy : public Ab
{
private:
    int x, y;

public:
    void inputxy()
    {
        cout << "\nEnter 2 Values :";
        cin >> x >> y;
    }
    void outputxy()
    {
        cout << "\nX = " << x << ",Y = " << y << ",A = " << a << " ,B = " << b;
    }
};

class mn : public Xy
{

private:
    int m, n;

public:
    void inputmn()
    {
        cout << "\nEnter Two Value :";
        cin >> m >> n;
    }
    void outputmn()
    {
        cout << "\n M = " << m << ",N = " << n;
    }
};
int main()
{
    Xy ob2;
    ob2.inputxy();
    ob2.outputxy();
    Ab ob;
    ob.output();
    mn m;
    m.input();
    //   ob2.input();
    return 0;
}
