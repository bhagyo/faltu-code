/******   HAREE KRISHNA   *******/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;
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

int wg[32];
int main()
{
    int i,j,k,cases;
    int n,p,q,ans;
    sf("%d",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        ans=0;
        sf("%d %d %d",&n,&p,&q);
        FOR(i,0,n)
        sf("%d",&wg[i]);
        sort(wg,wg+n);
        FOR1(j,0,p)
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
        if(j>p)
            j-=2;
        pf("Case %d: %d\n",k,j+1);
    }
    return 0;
}
