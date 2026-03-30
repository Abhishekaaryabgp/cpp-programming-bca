#include <iostream>
using namespace std;
void print(const vector<int> &y);
template <class T>
class vector
{
    int size = 3;
    T *v;

public:
    vector()
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = 0;
        }
    }
    vector(T *a)
    {
        for (int i = 0; i < size; i++)
            v[i] = a[i];
    }
    T operator*(vector &y)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->v[i] * y.v[i];
            return sum;
        }
    }
};

int main()
{
    int x[3] = {2, 4, 5};
    int y[3] = {1, 2, 8};
    vector<int> v1;
    vector<int> v2;
    v1 = x;
    v2 = y;
    int R = v1 * v2;
    cout << "R = " << R;
    return 0;
    system("pause>0");
    return 0;
}
