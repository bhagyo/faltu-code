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
#define wh while
#define PI acos(-1.0)
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,x,cases) for(i=x;i<=cases;i++)
#define FOR2(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define size 199999

/******   start your code   *******/

int main()
{
    int i,j,k,cases;C ch;
    LLD store1,store2,x1,y1,x2,y2;
    sf("%d%c",&cases,&ch);
    //
    FOR1(k,1,cases)
    {
        sf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        store1=abs(x1-x2);
        store2=abs(y1-y2);
        if(store1==store2)
            pf("Case %d: 1\n",k);
        else if(((x1+x2)&1)==1 && ((y1+y2)&1)==1)
            pf("Case %d: 2\n",k);
        else if(((x1+x2)&1)==0 && ((y1+y2)&1)==0)
            pf("Case %d: 2\n",k);
        else
            pf("Case %d: impossible\n",k);

    }
    return 0;
}










