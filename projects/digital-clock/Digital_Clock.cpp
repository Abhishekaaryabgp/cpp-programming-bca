#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int h = 0, m = 0, s = 0;

    cout << "Enter the Time Format in HH MM SS: ";
    cin >> h >> m >> s;

start:
    for (; h < 24; h++)
    {
        for (; m < 60; m++)
        {
            for (; s < 60; s++)
            {
                Sleep(1000);

                cout << "\n " << h << " Bajkar : " << m << " Minutes : Aur " << s << " Seconds : ";

                if (h < 12)
                    cout << "AM\n";
                else
                    cout << "PM\n";

                cout << "\n\t |Today is 23 January 2022| :";

                for (int i = 0; i < 36000; i++)
                {
                    i++;
                    i--;
                }
            }
            s = 0;
        }
        m = 0;
    }

    h = 0;
    goto start;

    return 0;
}