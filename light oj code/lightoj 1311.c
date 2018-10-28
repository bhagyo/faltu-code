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
typedef long double LLF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
typedef char C;

#define sf scanf
#define rtr return /* for return */
#define pf printf
#define sq(x) x*x
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
    int i,j,k,cases,num;C ch;
    LF v1,v2,v3,a1,a2,dis,time;
    sf("%d%c",&cases,&ch);
    FOR1(k,cases)
    {
        sf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        dis=(sq(v1)/(2.0*a1))+(sq(v2)/(2.0*a2));
        time=MAX(v1/a1,v2/a2);
        pf("Case %d: %lf %lf\n",k,dis,time*v3);
    }
    return 0;
}
