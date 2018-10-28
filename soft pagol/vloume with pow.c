#include<stdio.h>
#define pi 3.1416

int main()
{
    double x,y,volume;
    scanf("%lf",&x);
    y=pow(x,3);
    volume=(4.0/3.0)*pi*y;
    printf("the volume is %lf",volume);
    return 0;
}
