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
#define size 199999

/******   start your code   *******/

LF distance(LF x1,LF y1,LF x2,LF y2)
{
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}

int main()
{
    int i,j,k,cases;C ch;
    int ax,ay,bx,by,cx,cy,area;
    sf("%d%c",&cases,&ch);
    FOR1(k,1,cases)
    {
        sf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        pf("Case %d: %d %d \n",k,cx-(bx-ax),cy-(by-ay));
        area=distance((LF)ax,(LF)ay,(LF)bx,(LF)by)*distance((LF)bx,(LF)by,(LF)cx,(LF)cy);
        pf("last = %d\n",area);
    }
    return 0;
}


