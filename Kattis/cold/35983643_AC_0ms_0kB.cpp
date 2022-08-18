#include<iostream>
using namespace std;
int main(){
    int x,count=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
         int y;
         cin>>y;
         if(y<0){
             count++;
         }
    }
    cout<<count;
}