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
    int i,j,k,cases,hour,min,see_hour,see_min;
    sf("%d",&cases);
    FOR1(k,cases)
    {
        sf("%d:%d",&hour,&min);
        if(min==0)
            if(hour==12)
                see_hour=hour;
        if(min>0)
        {
            if(hour==12)
                see_hour=12-1;
            else if(hour==11)
                see_hour=11+1;
            else
                see_hour=11-hour;
        }
        if(min!=0)
            min=60-min;
        pf("%02d:%02d\n",see_hour,min);
    }
    return 0;
}














