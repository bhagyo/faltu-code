
#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10],y[10],p[10];
    int k,f,n,i,j=1,f1=1,f2=0;
    printf("\nEnter the number of observation: ");
    scanf("%d",&n);
    printf("\nEnter the different values of x: ");
    for(i=1;i<n;i++)
        scanf("%d",&x[i]);
    printf("\nThe corresponding values of y are: ");
    for(i=1;i<=n;i++)
        scanf("%d",&y[i]);
    f=y[1];
    printf("\nEnter the value of'k'in f(k) you want to evaluate: ");
    scanf("%d",&k);
    do
    {
        for(i=1;i<=n-1;i++)
        {
            p[i]=((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
        {
            f1*=(k-x[i]);
        }
