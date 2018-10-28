#include<stdio.h>
int main()
{
    unsigned long long int x,y,z;
    while(scanf("%llu %llu %llu",&x,&y,&z)!=EOF)
    {
        if(x==0||y==0||z==0)
            return 0;
        else if((x*x)+(y*y)==(z*z))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
