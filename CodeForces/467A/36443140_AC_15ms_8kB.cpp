#include<bits/stdc++.h>
int main(){
    int n,p,q,s1=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&p,&q);
        if(q-p>=2){
            s1++;
        }
    }
    printf("%d\n",s1);

    return 0;
}