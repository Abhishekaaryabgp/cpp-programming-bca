#include <iostream>
#include <string>
#include <fstream> // this is file stream library
using namespace std;
int main()
{
    fstream file, fin; /** using file variable we are going to read the file and write the file*/
    file.open("C:\\Users\\Abhishek Aarya\\Documents\\Records VS File Management\\WritingFileCpp.txt", ios::out);
    // out mode will open the file for writing
    if (file.is_open())
    {
        file << "Congratulations your file is successfully Created!" << endl;
        file.close(); // this is used to close the file
    }                 // Write file
    /***the avobe file will created and write your message in WritingFileCpp location  that */

    file.open("C:\\Users\\Abhishek Aarya\\Documents\\Records VS File Management\\WritingFileCpp.txt", ios::out);
    /*** out is the mode if you use again this will overwritten on that location*/
    if (file.is_open())
    {
        file << "Congratulations your Modification  is successfully Done!" << endl;
        file.close();
    } // Write file

    file.open("C:\\Users\\Abhishek Aarya\\Documents\\Records VS File Management\\WritingFileCpp.txt", ios::app);
    /*** app is the mode you can write data in existing file without overwritten on that location*/
    if (file.is_open())
    {
        file << "This is Append Mode to Write more!" << endl;
        file.close();
    } // apped file

    file.open("C:\\Users\\Abhishek Aarya\\Documents\\Records VS File Management\\WritingFileCpp.txt", ios::in);
    /*** in is the mode you can Read data in existing file without overwritten on that location*/
    if (file.is_open())
    {
        string line;                // in line variable all files are stored
        while (getline(file, line)) // getline()recieve 2 parameters
        {
            cout << line << endl;
        }

        file.close();
    } // read file using in
    system("pause>0");
    return 0;
}
