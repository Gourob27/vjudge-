#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 0 && a < 40)
    {
        cout << 40 - a;
    }else
    if (a >= 40 && a < 70)
    {
        cout << 70 - a;
    }else
    if (a >= 70 && a < 90)
    {
        cout << 90 - a;
    }
    else{
        cout<<"expert";
    }
   
}