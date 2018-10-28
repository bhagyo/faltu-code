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

LD dust[1001],sum;
int main()
{
    int i,j,cases,stdnt,caseno=1;
    sf("%d",&cases);
    while(cases--)
    {
        sum=0;
        sf("%d",&stdnt);
        for(i=0;i<stdnt;i++)
        {
            sf("%ld",&dust[i]);
            if(dust[i]>0)
                sum+=dust[i];
        }
        pf("Case %d: %d\n",caseno++,sum);
    }
    return 0;
}











