#include<stdio.h>

int main()
{
    double x1,x2,x3,sum1;
    int sum2;
    printf("1st num: ",x1);
    scanf("%lf",&x1);
    printf("2nd num: ",x2);
    scanf("%lf",&x2);
    printf("3rd num: ",x3);
    scanf("%lf",&x3);
    sum1=x1+x2;
    printf("the summation is: %lf\n",sum1);
    sum2=sum1/45;
    printf("the divide result is: %lf\n",sum2);
    return 0;
}
