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
#define size 199999

/******   start your code   *******/
C ch;
int main()
{
    int i,j,k,cases;
    int a,b,times,count;
    sf("%d%c",&cases,&ch);
    FOR1(k,1,cases)
    {
        a=2;
        count=0;
        sf("%d",&times);
        FOR(i,0,times)
        {
            sf("%d",&b);
            if(b>a)
            {
                count+=ceil((F)(b-a)/5.0);
                a=b;
            }
        }
        pf("Case %d: %d\n",k,count);
    }
    return 0;
}
