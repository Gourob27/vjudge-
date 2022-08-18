#include<iostream>
using namespace std;
int main(){
int i,n,s,p,sum=0;
cin>>n;
for(i=1;i<=n;i++)
{
  cin>>s>>p;
  sum=s+p;
  cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;
}
}
