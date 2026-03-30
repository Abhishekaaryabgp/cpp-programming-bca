#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    cout << "\nAdvanced Calculator (C++)\n";

    while (true)
    {
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulus";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 6)
        {
            cout << "Exiting...\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        switch (choice)
        {
        case 1:
            cout << "Result: " << a + b << endl;
            break;

        case 2:
            cout << "Result: " << a - b << endl;
            break;

        case 3:
            cout << "Result: " << a * b << endl;
            break;

        case 4:
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero\n";
            break;

        case 5:
            if ((int)b != 0)
                cout << "Result: " << (int)a % (int)b << endl;
            else
                cout << "Error: Division by zero\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    }

    return 0;
}