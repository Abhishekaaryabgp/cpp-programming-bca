#include <iostream>
using namespace std;
class S
{
private:
    int age;

public:
    S() : age(22){};
    void getAge()
    {
        cout << "Age is :" << age << endl;
    }
};
int main()
{
    S *ptr = new S();
    ptr->getAge();
    delete ptr;
    system("pause>0");
    return 1;

}
