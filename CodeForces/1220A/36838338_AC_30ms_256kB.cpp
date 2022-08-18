#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n;
 
    cin >> n;
 
    string s;
 
    cin >>s;
 
    int z=0,N=0;
 
    for( int i=0; i<n; i++ ){
        if(s[i]=='z')
            z++;
        if(s[i]=='n')
            N++;
    }
 
    for( int i=0; i<N; i++ )
        cout<<1<<" ";
 
    for( int i=0; i<z; i++ )
        cout<<0<<" ";
 
}
 