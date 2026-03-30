#include <iostream>
#include <conio.h>
using namespace std;
class Msort
{
    int a[50];
    int b[50];
    int c[100];
    int i, j, k, m, n;

public:
    void inputSize()
    {
        cout << "\nEnter Size of 1st Array" << endl;
        cin >> m;
        cout << "Now Enter 2nd Size of Array" << endl;
        cin >> n;
    }
    void inputEle()
    {
        cout << "Elements Must be shorted :" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "Enter Element for 1st Array:" << endl;
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << "Enter element for 2nd Array:" << endl;
            cin >> b[i];
        }
    }
    void Sort()
    {
        i = 0;
        j = 0;
        k = 0;
        while (i < m && j < n)
        {
            if (i < m && j < n)
            {
                c[k++] = a[i++];
            }
            else
            {
                c[k++] = b[j++];
            }
        }
        while (i < m)
        {
            c[k++] = a[i++];
        }
        while (j < n)
        {
            c[k++] = b[j++];
        }
    }
    void display()
    {
        cout << "\n 1st Array :";
        for (i = 0; i < m; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n 2nd Array :";
        for (i = 0; i < n; i++)
        {
            cout << "\n Result :";
        }
        for (size_t i = 0; i < m + n; i++)
        {
            cout << c[i] << " ";
        }
    }
};
int main()
{
    Msort obj;
    obj.inputSize();
    obj.inputEle();
    obj.Sort();
    obj.display();
    system("pause>0");
    return 0;
}
