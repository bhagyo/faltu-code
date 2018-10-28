#include<stdio.h>
int main()
{
    int a[1020],i,j,n,test,b,avr;
    long long int sum;
    float ans;
    while(scanf("%d",&test)==1)
    {
        for(j=0; j<test; j++)
        {
            b=0;
            sum=0;
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
                sum=sum+a[i];
            }
            avr=sum/n;
            printf("avr %d\n",avr);
            for(i=0; i<n; i++)
                if(a[i]>avr)
                    b++;
            ans=(float)b/(float)n;
            printf("%.3f%%\n",ans*100);
        }
    }
    return 0;
}
