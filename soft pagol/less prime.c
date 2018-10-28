#include<stdio.h>
int main()
{
    unsigned long long int x,y,j,i,l,k;
    while(scanf("%llu",&y)!=EOF)
    {
        if(x>=100&&x<=10000)
        {
            for(i=1; i<=y; i++)
            {
                scanf("%llu",&x);
                if(x>=100&&x<=10000)
                {
                    k=x/2;
                    for(j=k; j<x; j++)
                    {
                        for(l=2; l<j; l++)
                        {
                            if(j%l==0)
                                break;
                        }
                        if(l==j)
                            if((j*2)>x)
                            {
                                printf("%llu\n",j);
                                break;
                            }
                    }
                }
            }
        }
    }
    return 0;
}
