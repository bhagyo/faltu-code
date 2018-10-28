#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
typedef char C;
#define sf scanf
#define pf printf
#define wh while
#define PI acos(-1.0)
#define size 105
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/


LLD Combination(LLD n,LLD r)
{
    LLD ans=1;
    r=MIN(r,n-r);
    LLD i;
    for (i=1;i<=r;i++)
    {
        ans*=(n-r+i);
        ans/=i;
        printf("ans = %lld\n",ans);
    }
    return ans;
}
int main()
{
    LLD n,r;
    while(1)
    {
        sf("%lld %lld",&n,&r);
        if(n==0 && r==0)
            break;
        pf("%lld\n",Combination(n,r));
    }
    return 0;
}


