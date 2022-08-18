#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int found0, found1;
    found0 = s.find("0000000");
    found1 = s.find("1111111");
    if (found0 >= 0 || found1 >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}