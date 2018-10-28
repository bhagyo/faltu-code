#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t,l,b;
    long int ar,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&l,&b);
        ar=l*b;
        s=gcd(l,b);
        printf("%d\n",ar/(s*s));
    }
}
