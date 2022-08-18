#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,i,flag=0,x;
        int a[200005]={ 0 };
        scanf("%d",&n);
        for (i=0; i<n; i++)
        {
 
            scanf("%d",&x);
            a[x]++;
            if (a[x]==3 && flag==0)
            {
                printf("%d\n",x);
                flag++;
            }
        }
        if (flag==0)
            printf("-1\n");
    }
}