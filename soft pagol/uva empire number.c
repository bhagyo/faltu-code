#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int x,i,z,j,a[10000],k,l,m,p,sum,ck1,ck2,q;
    while(scanf("%llu",&x)!=EOF)
    {
        m=1,sum=0;
        k=x;
        l=0;
        for(i=2; i<=sqrt(x); i++)
        {
            if(x%i==0)
            {
                printf("%llu is not prime.\n",x);
                ck1=2;
                break;
            }
        }
        if(i>sqrt(x))
            ck1=1;
        while(x!=0)
        {
            x=x/10;
            l++;
        }
        x=k;
        q=x;
        for(i=0; i<l; i++)
        {
            z=x%10;
            a[i]=z;
            if(x==0)
                break;
            x=x/10;
        }
        for(i=1; i<l; i++)
            m=m*10;
        for(i=0; i<l; i++)
        {
            j=a[i]*m;
            sum=sum+j;
            m=m/10;
        }
        for(i=2; i<=sqrt(sum); i++)
            if(sum%i==0)
            {
                ck2=3;
                break;
            }
        if(i>sqrt(sum))
            ck2=1;
        if(ck1==ck2)
            printf("%llu is emirp.\n",q);
        else if((ck1==1)&&(ck2==3))
            printf("%llu is prime.\n",q);
    }
    return 0;
}
