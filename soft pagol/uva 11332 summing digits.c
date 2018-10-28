#include<stdio.h>
int main()
{
    long long int num,i,j,k,l,m,n,o,p,ck,see,store,sum,value,rem;
    while(scanf("%lld",&num)==1)
    {
        if(num==0)
            break;
        store=0;
        for(i=num;i!=0;i/=10)
            store=store+i%10;
        num=store;
        if(store>=10)
        {
            store=0;
            for(i=num;i!=0;i/=10)
                store=store+i%10;
            num=store;
            if(store>=10)
            {
                store=0;
                for(i=num;i!=0;i/=10)
                    store=store+i%10;
                printf("%lld\n",store);
            }
            else
                printf("%lld\n",store);
        }
        else
            printf("%lld\n",store);
    }
    return 0;
}
