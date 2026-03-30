#include <iostream>
using namespace std;
template <class T>
class Stack
{
    T a[10];
    int top;
    int ele;

public:
    Stack() // constructor
    {
        top = -1;
    }

    void push(T ele) // for emplements elements
    {
        if (top == 9)
        {
            cout << "\nStackoverFlow :" << endl;
            return;
        }
        top++;
        a[top] = ele;
        cout << "Element Inserted :" << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "\nUnderFlow.... ";
            return;
        }
        cout << "Element " << a[top] << " deleted...." << endl;
        top--;
    }

    void disp()
    {
        if (top == -1)
        {
            cout << "\nUnderFlow.... ";
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << "\t " << a[i];
        }
    }
};

int main()
{
    Stack<string> obj;
    int ch, i;
    string ele;
    do
    {
        cout << "\nEnter 1 for push " << endl;
        cout << "Enter 2 for pop " << endl;
        cout << "Enter 3 for display " << endl;
        cout << "Enter 4 for Exit " << endl;
        cout << "Enter your choice dear ..." << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << ".....Enter Element !....." << endl;
            cin >> ele;
            obj.push(ele);
            break;

        case 2:
            obj.pop();
            break;

        case 3:
            obj.disp();
            break;
        case 4:
            exit(0);
        default:
            cout << "Try again..." << endl;
            break;
        }
    } while (ch != 4);
}