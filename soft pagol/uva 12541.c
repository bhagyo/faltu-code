#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
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
#define size 105
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/

C name[105][17];
int day[105],mon[105],year[105],age[105];
int main()
{
    int i,j,k,l,m,o,p,ck,age,cases,max,min;
    while(sf("%d",&cases)==1)
    {
        max=min=0
        for(i=0; i<cases; i++)
            scanf("%s %d %d %d",name[i],day[i],mon[i],year[i]);
        for(i=0;i<cases;i++)
        {
            age[i]=year[i]-year[i+1];
            if()
        }
    }
    return 0;
}
















