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
    int cases,count=1;
    double rad;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%lf",&rad);
        printf("Case %d:\n",count);
        printf("%.0lf %.0lf\n",-2.25*rad,1.5*rad);
        printf("%.0lf %.0lf\n",2.75*rad,1.5*rad);
        printf("%.0lf %.0lf\n",2.75*rad,-1.5*rad);
        printf("%.0lf %.0lf\n",-2.25*rad,-1.5*rad);
        count++;
    }
    return 0;
}
