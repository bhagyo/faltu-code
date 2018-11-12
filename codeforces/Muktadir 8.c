
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("how many number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum=sum+(2*i);
        printf("sum=%d",sum);
    return 0;
}

