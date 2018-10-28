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

LF leng(LF x1,LF y1,LF x2,LF y2)
{
	LF len;
	len=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
	return len;
}

int main()
{
    int i,j,k,cases,num;
    C ch;
    LF ox,oy,ax,ay,bx,by,oa,ab,thta,ans;
    sf("%d%c",&cases,&ch);
    FOR1(k,cases)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);

        oa=leng(ox,oy,ax,ay);

        ab=leng(bx,by,ax,ay);

        thta=(acos((oa*oa+oa*oa-ab*ab)/(oa*oa*2)))*oa;

        printf("Case %d: %lf\n",k,thta);
    }
    return 0;
}
