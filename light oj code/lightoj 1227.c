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
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) x*x
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,x,cases) for(i=x;i<=cases;i++)
#define FOR2(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define ck printf("ck\n")
#define ck1 printf("ck1\n")
#define size 199999

/******   start your code   *******/

LD wg[32];
int main()
{
    LD i,j,k,cases;
    LD n,p,q,ans;
    sf("%ld",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        ans=0;
        sf("%ld %ld %ld",&n,&p,&q);
        FOR(i,0,n)
            sf("%ld",&wg[i]);
        FOR(j,0,p)
        {
            ans+=wg[j];
            if(ans==q)
                break;
            else if(ans>q)
            {
                j--;
                break;
            }
        }
        if(j>(p-1))
            j--;
        if(j>(n-1))
            j=n-1;
        pf("Case %ld: %ld\n",k,j+1);
    }
    return 0;
}
