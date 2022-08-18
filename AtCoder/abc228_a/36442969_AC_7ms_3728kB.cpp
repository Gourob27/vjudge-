#include<iostream>
using namespace std;
int main(){
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);
    if(t>s){
        if(x<s){
            cout<<"No";
        }
        else if(x<t){
           cout<<"Yes";
        }
        else{
           cout<<"No";
        }

    }
    else{
        if(x>=s){
           cout<<"Yes";
        }
        else if(x<t){
           cout<<"Yes";
        }
        else{
           cout<<"No";
        }
    }
    return 0;
}