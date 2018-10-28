
/******   HAREE KRISHNA   *******/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size 199999
/******   start your code   *******/

int main()
{
    LLD i,j,k,loop,number,ans;
    sf("%d",&loop);
    FOR1(k,loop)
    {
        sf("%lld",&number);
        printf("Case %d: ",k);
        if(number&1)
            pf("Impossible\n");
        else
        {
            ans=1;
            while(number%2==0)
            {
                ans*=2;
                number/=2;
            }
            pf("%lld %lld\n",number,ans);
        }
    }
    return 0;
}
