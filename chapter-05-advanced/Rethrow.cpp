#include <iostream>
#include <string.h>
using namespace std;
void username()
{
    char userID[20];
    int len;
    int spc, i;

    try
    {
        // cheking user id
        cout << "Enter username" << endl;
        gets(userID);
        len = strlen(userID);

        if (len < 19)
        {
            throw 8.1f;
        }
        else if (len > 9)
        {
            throw 'a';
        }

        for (int i = 0; userID[i] != '\0'; i++)
        {
            if (userID[i] == ' ')
            {
                spc++;
                throw(i);
            }
        }
        cout << "UserID is " << userID;
    }
    catch (int)
    {
        cout << "User ID is should not contained spaces!" << endl;
        throw;
    }
    catch (float)
    {
        cout << "User ID not be less that 8" << endl;
        throw;
    }
    catch (char)
    {
        cout << "Should not contain more that 8 char ";
        throw;
    }
}
int main()
{
    try
    {
        username();
        cout << "Arigato Gozaimas !...\n"
             << endl;
    }
    catch (...) // catchinng multiple types of datatypes exceptions using (...)
    {
        cout << "an exception is occured in user ID" << endl;
    }
    return 0;
}
// Rethrowing concept..