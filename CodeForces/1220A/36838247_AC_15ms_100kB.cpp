#include<bits/stdc++.h>
using namespace std;
int main()
{ 
 int n;
 cin>>n;
 char s[n];
 cin>>s;
 sort(s,s+n);
 for(int i=0;i<n;i++){
	 if(s[i]=='n') cout<<1<<" ";
	 if(s[i]=='z') cout<<0<<" ";
 }
}
   