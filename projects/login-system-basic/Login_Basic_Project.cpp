#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class LoginSystem
{
public:
    void registerUser()
    {
        string username, password;
        ofstream file("users.txt", ios::app);

        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        file << username << " " << password << endl;
        file.close();

        cout << "\nRegistration Successful\n";
    }

    void loginUser()
    {
        string username, password;
        string fileUser, filePass;
        bool found = false;

        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        ifstream file("users.txt");

        while (file >> fileUser >> filePass)
        {
            if (fileUser == username && filePass == password)
            {
                found = true;
                break;
            }
        }

        file.close();

        if (found)
            cout << "\nLogin Successful\n";
        else
            cout << "\nInvalid Username or Password\n";
    }
};

int main()
{
    LoginSystem obj;
    int choice;

    while (true)
    {
        cout << "\n1. Register\n2. Login\n3. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.registerUser();
            break;
        case 2:
            obj.loginUser();
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice\n";
        }
    }
}