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

int main()
{
    int i,j,k,cases;C ch;
    int ax,ay,bx,by,cx,cy,dx,dy,area,store1,store2;
    sf("%d%c",&cases,&ch);
    FOR1(k,1,cases)
    {
        sf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=cx-bx+ax;
        dy=cy-by+ay;
        area=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        if(area<0)
            area*=-1;
        area=0.5*area;
        pf("Case %d: %d %d %d\n",k,dx,dy,area);
    }
    return 0;
}






