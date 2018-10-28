#include<stdio.h>
long long big(int a,int b )
{
    return a>b;
}
int main()
{
    long long int a[50000],t,n,i;
    while(scanf("%lld",&t)!=EOF)
    {
        while(t--)
        {
            scanf("%lld",&n);
            for(i=0; i<n; i++)
                scanf("%lld",&a[i]);
            sort(a,a+n,big);
            long long s=0;
            for(i=2; i<n; i=i+3)
                s+=a[i];
            pf("%lld\n",s);
        }
    }
    return 0;
}
