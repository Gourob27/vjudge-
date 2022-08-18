#include<iostream>
using namespace std;
int main()
{
    int n, A=0, D=0;
    char ch;
    cin>>n;
    for(int i = 1; i<=n ; i++)
    {
        cin>>ch;
        if(ch == 'A') A++;
        if(ch == 'D') D++;
    }
    if(A>D)
    {
        printf("Anton\n");
    }
    if(A<D)
    {
        printf("Danik\n");
    }
    if(A==D) {
        printf("Friendship\n");
    }

    return 0;
}