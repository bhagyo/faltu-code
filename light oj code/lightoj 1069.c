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
    int i,j,cases;
    int my,lift,ans;
    sf("%d",&cases);
    for(i=1;i<=cases;i++)
    {
        sf("%d %d",&my,&lift);
        ans=my-lift;
        ans>0?ans:(ans*=(-1));
        ans=ans+my;
        ans=4*ans+19;
        pf("Case %d: %d\n",i,ans);
    }
    return 0;
}

