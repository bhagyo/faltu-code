
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    double y[20][20], x[20];
    int i,j,k,num;
    printf("\nBackward differences generation for Interpolation");
    printf("\n Enter the value of x and y=f(x)");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("\nEnter value of x%d:",i);
        scanf("%lf",&x[i]);
        printf("\nEnter value of y%d:",i);
        scanf("%lf",&y[i][0]);
    }
    k=0;
    for(j=1;j<num;j++)
    {
        k++;
        for(i=num-1;i>=k;i--)
        {
            y[i][j]=y[i][j-1]-y[i-1][j-1];
        }
    }
    k=num;
    printf("\nBackward Difference Table");
    printf("\n\tx\ty\tDy\tD2y\tD3y\tD4y\tD5y\tD6y");
    for(i=0;i<num;i++)
    {
        printf("\nx%d  =%4.2lf",i,x[i]);
        for(j=0;j<i+1;j++)
        {
            printf("\t%4.2lf",y[i][j]);
        }
        printf("\n");
    }
}
