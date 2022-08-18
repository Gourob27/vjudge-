#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x == 5 && y == 5 && z == 7)
    {
        cout << "YES";
    }
    else if (x == 5 && y == 7 && z == 5)
    {
        cout << "YES";
    }
    else if (x == 7 && y == 5 && z == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}