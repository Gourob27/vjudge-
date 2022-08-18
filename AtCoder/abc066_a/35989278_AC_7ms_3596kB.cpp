#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    sum1 = x + y;
    sum2 = x + z;
    sum3 = y + z;
    if (sum1 < sum2 && sum1 < sum3)
    {
        cout << sum1;
    }
    else if (sum2 < sum1 && sum2 < sum3)
    {
        cout << sum2;
    }
    else
    {
        cout << sum3;
    }
}