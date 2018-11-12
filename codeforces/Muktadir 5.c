
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("enter any value:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("sum=%d",sum);
    getch();
}
