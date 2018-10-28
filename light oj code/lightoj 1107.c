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
    int i,j,k,cases;
    int x1,y1,x2,y2,x,y,cows;
    sf("%d",&cases);
    FOR1(k,cases)
    {
        sf("%d %d %d %d",&x1,&y1,&x2,&y2);
        pf("Case %d:\n",k);
        sf("%d",&cows);
        FOR(j,cows)
        {
            sf("%d %d",&x,&y);
            if((x2>=x&&x>=x1)&&(y2>=y&&y>=y1))
                pf("Yes\n");
            else
                pf("No\n");
        }
    }
    return 0;
}
