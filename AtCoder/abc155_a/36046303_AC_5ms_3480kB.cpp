#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x==y&&x==z&&y==z||x!=y&&y!=z&&x!=z){
        cout<<"No";

    }else{
        cout<<"Yes";
    }
}