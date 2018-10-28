#include<stdio.h>
#include<math.h>
int main()
{
    double base,ans;
    double power;
    while(scanf("%lf%lf",&power,&base)==2)
    {
        ans=pow(base,(1/power));
        printf("%0.0lf\n",ans);
    }
    return 0;
}
