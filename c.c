#include<stdio.h>
int main()
{
    int i,num,c=0;
    printf("enter a number");
    scanf("%d",&num);
    for (i=2;i<=num/2;i++)
    {
        if (num%i==0){
        printf("factor =%d of %d",i,num);
        c=1;
        break;
    }
    }
    if (c==0){
    printf("prime");
    }
    else
    printf("not a prime");
    return 0;
}