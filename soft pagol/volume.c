#include<stdio.h>
#define pi 3.1416
#define cube(x) (x)*(x)*(x)

int main()
{
    double x,volume;
    printf("what's the radious: ");
    scanf("%lf",&x);
    volume=(4.0/3.0)*pi*cube(x);
    printf("the volume is %lf",volume);
    return 0;
}
