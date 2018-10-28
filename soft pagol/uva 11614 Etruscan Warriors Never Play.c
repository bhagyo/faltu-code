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
#define PI 2*acos(0.0)
#define size 105
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/

int main()
{
    LLD i,n,t,sum;
    sf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        sf("%lld",&n);
        sum = (sqrt(1+8*n)-1)/2;
        pf("%lld\n",sum);
    }
    return 0;
}
