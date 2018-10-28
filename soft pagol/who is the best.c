#include<stdio.h>
int main()
{
    long long int x,m,y,T,i,j,l,ara[2008],temp,k;
    char ch[9];
    scanf("%lld",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%s",ch);
        scanf("%lld",&y);
        for(j=0; j<y; j++)
            scanf("%lld",&ara[j]);
        for(l=0; l<y-1; l++)
        {
            for(j=l+1; j<y; j++)
            {
                if(ara[l]>=ara[j])
                {
                    temp=ara[l];
                    ara[l]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        printf("%lld\n",ara[--y]);
    }
    return 0;
}
