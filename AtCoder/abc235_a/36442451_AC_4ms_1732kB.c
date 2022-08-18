#include<stdio.h>

int main()
{
    int num, a, b, c;
    scanf("%d", &num);

    c = num % 10;
    num = num / 10;
    b = num % 10;
    num = num / 10;
    a = num % 10;
    num=num/10;
    printf("%d\n", (a * 100 + b * 10 + c) + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b) );

    return 0;
}