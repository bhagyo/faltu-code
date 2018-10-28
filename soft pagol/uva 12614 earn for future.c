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

int main()
{
    int n,m,a[10001],i,j,k,l,b,c,d;
    sf("%d",&n);
    for(i=1; i<=n; i++)
    {
        b=0;
        sf("%d",&m);
        for(j=0; j<m; j++)
        {
            sf("%d",&a[j]);
            if(a[j]>b)
                b=a[j];
        }
        pf("Case %d: %d\n",i,b);
    }
    return 0;
}
