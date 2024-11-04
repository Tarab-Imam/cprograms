#include<stdio.h>
int main()
{
    int base,exponent;
    long value=1;
    printf("entyer base");
    scanf("%d",&base);
    printf("enter exponent");
    scanf("%d",&exponent);
    while (exponent !=0)
    {
        value*=base;
        --exponent;
    }
    printf("result=%ld",value);
    return 0;
}