#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%a==0&&i%b!=0)
        {
            cout<<"Fizz"<<endl;
        }else if(i%b==0&&i%a!=0){
            cout<<"Buzz"<<endl;
        }else if(i%a==0&&i%b==0){
            cout<<"FizzBuzz"<<endl;
        }else{
            cout<<i<<endl;
        }
    }

}