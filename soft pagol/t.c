#include<stdio.h>

int main()
{
    int a,n;
    while(1)
    {
        printf("Enter a number to reverse:  ");
        scanf("%d",&n);
        a=0;
        while(n!=0)
        {
            a=a*10;
            a=a+n%10;
            n=n/10;
        }
        printf("Reverse: %d \n",a);
    }
    return 0;
}
