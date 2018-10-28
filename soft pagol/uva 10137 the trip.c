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
#define size 199999
/******   start your code   *******/

int main()
{
    int i,j,trip;
    LF cost[1010],store,sum1,sum2,avg,sum;
    while(sf("%d",&trip)==1&&trip!=0)
    {
        sum1=sum2=sum=0.0;
        for(i=0;i<trip;i++)
        {
            sf("%lf",&cost[i]);
            sum+=cost[i];
        }
        avg=sum/trip;
        for(i=0;i<trip;i++)
        {
            store=(double)((avg-cost[i])*100)/100;
            if(store>0)
                sum1+=store;
            else
                sum2-=store;
        }
        if(sum1>sum2)
            pf("$%lf\n",sum1);
        else
            pf("$%lf\n",sum2);
    }
    return 0;
}




