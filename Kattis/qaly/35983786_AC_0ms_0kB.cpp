#include<iostream>
using namespace std;
int main()
{
    int n;
    double multiple;
   double total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double a,b;
        cin>>a>>b;
        multiple=a*b;
        total=total+multiple;
    }
    cout<<total;
}