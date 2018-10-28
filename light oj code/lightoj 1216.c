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
#define squre(x) x*x
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size 199999
/******   start your code   *******/

int main()
{
    int i,j,k,cases,num;
    sf("%d",&cases);
    LF RAD,rad,n_rad,hight,pol,ans,vol;
    FOR1(k,cases)
    {
        sf("%lf %lf %lf %lf",&RAD,&rad,&hight,&pol);

        n_rad=rad+(RAD-rad)*(pol/hight);

        vol=(1.0/3.0)*PI*pol*(squre(rad)+squre(n_rad)+(rad*n_rad));

        pf("Case %d: %0.8lf\n",k,vol);
    }
    return 0;
}
