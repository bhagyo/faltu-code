#include<stdio.h>
int main()
{
    long long int x,i,j,k,l,temp,ara[3];
    while(scanf("%lld",&x)!=EOF)
    {
        for(k=1; k<=x; k++)
        {
            for(i=0; i<3; i++)
                scanf("%lld",&ara[i]);
            for(l=0; l<2; l++)
            {
                for(j=l+1; j<3; j++)
                {
                    if(ara[l]>=ara[j])
                    {
                        temp=ara[l];
                        ara[l]=ara[j];
                        ara[j]=temp;
                    }
                }
            }
            printf("Case %lld: %lld\n",k,ara[1]);
        }
    }
    return 0;
}
