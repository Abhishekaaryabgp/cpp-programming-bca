#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size: " << endl;
    cin >> size;
    // in dynamic allocation wee have two key working with dynamic array 1 is (new) 2nd is (delete)
    int *myArray = new int[size]; // Here we allocating the arrays.
    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "]" << endl;
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " "; // it is default type
        // cout << *(myArray + i)<< " " ; // we can do same thing using dreference.
    }
    delete[] myArray; // in dyanmic allocation when you use new each time you will have to write delete[]...
    myArray = NULL;
    system("pause>0");
    return 0;
}
