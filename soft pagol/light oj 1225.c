#include<stdio.h>
#define pi 3.1415926535897932384626433832795
int main()
{
    double rads,area;
    int cases,i;
    while(scanf("%d",&cases)!=EOF)
    {
        if(cases<=1000)
        {
            for(i=1; i<=cases; i++)
            {
                scanf("%lf",&rads);
                if(rads<=1000.0)
                    printf("Case %d: %.2lf\n",i,(4*rads*rads)-(pi*rads*rads));
            }
        }
    }
    return 0;
}
