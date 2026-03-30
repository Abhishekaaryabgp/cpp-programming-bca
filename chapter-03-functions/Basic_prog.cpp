#include <iostream>
using namespace std;
void Hi(){
    cout << "Hi" << endl;
}

/*void Sum(int a,int b)//Here you know how to call a function
{
   
    int c = a + b;
    cout << "Sum = :"<<c;
}*/
int main()
{

    Hi();//Here The Hi Function is calling.....three times
    Hi();
    Hi();
    system("pause>0");
    return 0;
}
