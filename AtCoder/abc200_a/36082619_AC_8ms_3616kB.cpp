#include<bits/stdc++.h>
using namespace std;
int main()
{
   int c;
   cin>>c;
     if (c <= 0)
    {
       cout<<"sorry";
    }

    else if (c <= 100)
    {
        cout<<"1";
    }
    else if (c % 100 == 0)
    {
        cout<<c/ 100;
    }
    else
    {
        cout<<c/ 100 +1;
    }


}