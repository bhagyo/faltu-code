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
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)

/******   start your code   *******/

LLD Combination(LLD n, LLD r)
{
    LLD ans=1;
    r=MIN(r,n-r);
    LLD i;
    for (i=1;i<=r;i++)
    {
        ans*=(n-r+i);
        ans/=i;
    }
    return ans;
}
int main()
{
    LLD i,j,k,l,m,n,o,p,num,N,R;

    while(sf("%lld",&N)==1)
    {
        scanf("%lld",&R);
        if(N==0&&R==0)
            break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",N,R,Combination(N,R));
    }
    return 0;
}
