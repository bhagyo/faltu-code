#include<stdio.h>
int main()
{
    int n,k,s,b,tb,r;
    while(scanf("%d",&n)!=EOF)
    {
        s=n;
        tb=0;
        while(s>=3)
        {
            b=s/k;
            r=s%k;
            s=b+r;
            tb=tb+b;
        }
        if(s==2)
            tb++;
        printf("%d\n",n+tb);
    }
    return 0;
}
