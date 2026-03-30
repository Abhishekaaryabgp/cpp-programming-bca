#include <iostream>
using namespace std;
int main()
{
    int in[10], out[10], count, i;
    cout << "Enter the element !" << endl;
    cin >> count;
    cout << "Enter " << count << " number\n";
    for (i = 0; i < count; i++)
    {
        cin >> in[i];
    }

    for (i = 0; i < count; i++)
    {
        out[i] = in[count - i - 1];
    }

    cout << "Reverse order!\n";
    for (i = 0; i < count; i++)
    {
        cout << out[i] << " ";
    }
    return 0;
}