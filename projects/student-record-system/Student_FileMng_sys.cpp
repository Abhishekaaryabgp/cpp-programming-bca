#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cstdio>

using namespace std;

class Student
{
public:
    int roll;
    char name[50];
    char f_name[50];
    long long adharcard;
    long long mobile_no;
    int total_marks;
    char city[50];
    int pin_no;

    void input()
    {
        cout << "\nEnter Your Roll Number: ";
        cin >> roll;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Your Beautiful Name: ";
        cin.getline(name, 50);

        cout << "Enter Your Father's Name: ";
        cin.getline(f_name, 50);

        cout << "Enter Your Total Marks: ";
        cin >> total_marks;

        cout << "Enter Your Mobile Number: ";
        cin >> mobile_no;

        cout << "Enter Your Aadhar Card Number: ";
        cin >> adharcard;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before next string

        cout << "Enter Your City: ";
        cin.getline(city, 50);

        cout << "Enter Your Pin Code / Zip Code: ";
        cin >> pin_no;
    }

    void output()
    {
        cout << "\n----------------------------------------";
        cout << "\nName              =>  " << name;
        cout << "\nRoll Number       =>  " << roll;
        cout << "\nTotal Marks       =>  " << total_marks;
        cout << "\nFather's Name     =>  " << f_name;
        cout << "\nMobile Number     =>  " << mobile_no;
        cout << "\nAadhar Number     =>  " << adharcard;
        cout << "\nCity              =>  " << city;
        cout << "\nPin/Zip Code      =>  " << pin_no;
        cout << "\n----------------------------------------";
    }

    int getroll()
    {
        return roll;
    }
};

void SaveData(Student &S)
{
    ofstream fout("StudentData.txt", ios::app | ios::binary);
    if (!fout)
    {
        cout << "\n[ERROR] Something went wrong while opening the file.\n";
        return;
    }
    fout.write((char *)&S, sizeof(Student));
    fout.close();
    cout << "\n*** Your records are saved successfully! ***\n";
}

void ShowRecords()
{
    ifstream fin("StudentData.txt", ios::in | ios::binary);
    if (!fin)
    {
        cout << "\n[ERROR] No records found or file could not be opened.\n";
        return;
    }

    Student S;
    bool found = false;
    while (fin.read((char *)&S, sizeof(S)))
    {
        S.output();
        found = true;
    }
    fin.close();

    if (!found)
    {
        cout << "\nNo records available.\n";
    }
}

void Delete()
{
    int roll;
    bool found = false;
    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;

    ifstream fin("StudentData.txt", ios::in | ios::binary);
    ofstream fout("temp.txt", ios::out | ios::binary);

    if (!fin || !fout)
    {
        cout << "\n[ERROR] Could not open file.\n";
        return;
    }

    Student S;
    while (fin.read((char *)&S, sizeof(S)))
    {
        if (roll == S.getroll())
        {
            found = true;
        }
        else
        {
            fout.write((char *)&S, sizeof(S));
        }
    }

    fin.close();
    fout.close();

    remove("StudentData.txt");
    rename("temp.txt", "StudentData.txt");

    if (found)
        cout << "\n*** Record deleted successfully! ***\n";
    else
        cout << "\n*** Roll Number does not exist! ***\n";
}

bool SearchData()
{
    int roll;
    bool found = false;
    cout << "\nEnter Roll Number to search: ";
    cin >> roll;

    ifstream fin("StudentData.txt", ios::in | ios::binary);
    if (!fin)
    {
        cout << "\n[ERROR] No records found.\n";
        return false;
    }

    Student S;
    while (fin.read((char *)&S, sizeof(S)))
    {
        if (roll == S.getroll())
        {
            cout << "\n--- Record Found ---";
            S.output();
            found = true;
            break;
        }
    }
    fin.close();

    if (!found)
    {
        cout << "\n*** Record Not Found! ***\n";
    }

    return found;
}

void updateData()
{
    int roll;
    bool found = false;
    cout << "\nEnter Roll Number to update: ";
    cin >> roll;

    ifstream fin("StudentData.txt", ios::in | ios::binary);
    ofstream fout("temp.txt", ios::out | ios::binary);

    if (!fin || !fout)
    {
        cout << "\n[ERROR] Could not open file.\n";
        return;
    }

    Student S;
    while (fin.read((char *)&S, sizeof(S)))
    {
        if (roll == S.getroll())
        {
            found = true;
            cout << "\nRecord found! Enter new details:\n";
            Student newData;
            newData.input();
            fout.write((char *)&newData, sizeof(newData));
        }
        else
        {

            fout.write((char *)&S, sizeof(S));
        }
    }

    fin.close();
    fout.close();

    remove("StudentData.txt");
    rename("temp.txt", "StudentData.txt");

    if (found)
        cout << "\n*** Congratulations! Data updated successfully. ***\n";
    else
        cout << "\n*** Roll Number not found. Cannot update. ***\n";
}

int main()
{
    Student S;
    int choice;

    while (true)
    {
        cout << "\n=============================================================";
        cout << "\n                STUDENT MANAGEMENT SYSTEM                    ";
        cout << "\n=============================================================";
        cout << "\n1. Register a Student";
        cout << "\n2. Show All Records";
        cout << "\n3. Search Record";
        cout << "\n4. Delete Record";
        cout << "\n5. Update Record";
        cout << "\n6. Exit";
        cout << "\n=============================================================";
        cout << "\n\nEnter Your Choice: ";

        if (!(cin >> choice))
        {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input! Please enter a number.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            S.input();
            cout << "\nDo you want to Save Your Records? [Y/N]: ";
            char save_choice;
            cin >> save_choice;
            if (save_choice == 'y' || save_choice == 'Y')
            {
                SaveData(S);
            }
            break;
        case 2:
            ShowRecords();
            break;
        case 3:
            SearchData();
            break;
        case 4:
            Delete();
            break;
        case 5:
            updateData();
            break;
        case 6:
            cout << "\nExiting Program. Goodbye!\n";
            exit(0);
        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }

    return 0;
}