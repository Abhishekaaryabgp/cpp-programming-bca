#include <iostream>
#include <exception>
using namespace std;
struct Myexcep : public exception
{
    const char *what() const throw()
    {
        return "Error";
    }
};

int main()
{
    try
    {
        throw Myexcep();
    }
    catch (Myexcep &e)
    {
        cout << "Exception caught !" << endl;
        cout << e.what() << '\n';
    }
    catch (exception &e)
    {
        // other errors
    }

    return 0;
}
