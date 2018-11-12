#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float x1,x2,p,q;
    printf("a=");
    scanf("%d",&a);
     printf("b=");
    scanf("%d",&b);
     printf("c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("\nx1=%.2f\nx2=%.2f",x1,x2);
    }
    else if(d==0)
    {
        x1=x2=-b/(2*a);
        printf("\nx1=%.2f\nx2=%.2f",x1,x2);
        }
        else
        {
            p=-b/(2*a);
            q=sqrt(-d)/(2*a);
            printf("\nx1=%.2f+%.2f i\nx2=%.2f-%.2f i",p,q,p,q);
        }
        getch();
        }

