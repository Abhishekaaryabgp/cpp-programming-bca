#include <iostream>
using namespace std;
template <class T>
T getMax(T val, T val2)
{
    return ((val > val2) ? val : val2); // compareing true false syntax
}
int main()
{
    cout << "Integer " << getMax(2, 3) << endl;
    cout << "Float " << getMax(5.6, 7.9);
    cout << "\nString " << getMax("a", "a") << endl; // compare asqi code
    system("pause>0");
    return 0;
}
