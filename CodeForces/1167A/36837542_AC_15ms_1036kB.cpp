#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    string str;
    int n;
    while(T--)
    {
        cin>>n;
    cin>>str;
    int len=str.length();
    if(len>11)
    {
        int flag=0;
        for(int t=len-11;t>=0;t--)
        {
            if(str[t]=='8')
            {
            flag=1;
            break;    
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
    else if(len==11)
    {
        if(str[0]=='8')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
