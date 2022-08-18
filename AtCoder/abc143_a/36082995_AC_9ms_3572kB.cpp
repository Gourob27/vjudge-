#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 cin>>a>>b;
 int total=b*2;
 int result= a-total;
 if(total>=a)
 {
     cout<<'0';
 }else{
     cout<<result;
 }
}