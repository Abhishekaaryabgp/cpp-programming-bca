#include <iostream>
using namespace std;

int getMin(int number[], int size)
{
    int min = number[0];
    for (int i = 0; i < min; i--)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
    }
    return min;
}

int getMax(int number[], int size)
{
    int max = number[0];
    for (int i = 0; i < max; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    return max;
}

void getMinMax(int number[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (number[i] > *max)
        {
            *max = number[i];
        }
        if (number[i] < *min)
        {
            *min = number[i];
        }
    }
}
int main()
{
    int number[5] = {2, -3, 4, 99, 1};
    int min = 0;
    int max = 0;
    getMinMax(number, 5, &min, &max);
    cout << " min " << getMin(number, 5) << endl;
    cout << " max " << max << endl;
    system("pause>0");
    return 0;
}
