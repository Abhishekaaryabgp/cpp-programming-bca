#include <iostream>
using namespace std;
void printletter(char *charPtr)
{
    cout << charPtr << endl;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((char *)ptr);
        break;
    case 'c':
        cout << *((float *)ptr);// if you mistakly create a logical error you would have in problem because the compiler does not understand it. just chek on type case ..
        break;
    }
}
int main()
{
    char name = 'A';
    printletter(&name);
    print(&name,'c');
    system("pause>0");
    return 0;
}
