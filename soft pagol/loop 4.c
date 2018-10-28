#include<stdio.h>
#define pi 3.1416
#define cube(x) x*x*x

int main()
{
    float x,volume;
    printf("enter the radious of the function: ");
    scanf("%f",&x);
    volume=(4.0/3.0)*pi*cube(x);
    printf("the volume is %f",volume);
    return 0;
}
