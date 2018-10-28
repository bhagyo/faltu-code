#include<stdio.h>
int main()
{
    long long i,test;
    scanf("%lld",&test);
    for(int j=1;j<=test;j++)
    {
        scanf("%lld",&i);
        printf("Case %d: %lld\n",j,i/2);
    }
    return 0;
}
