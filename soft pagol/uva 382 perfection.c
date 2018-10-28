/******   HAREE KRISHNA   *******/
#include<stdio.h>
#include<string.h>
#include<strings.h>
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
#define middle(x,y,z) (y>=x&&x<=z)?x:((x>=y&&y<=z)?y:z)
#define size 199999
/******   start your code   *******/

int main()
{
    int n,i,j,k,l,m,sum;
    pf("PERFECTION OUTPUT\n");
    while(sf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        for(i=1; i<=n/2; i++)
            if(n%i==0)
                sum=sum+i;
        if(sum==n)
            pf("%5d  PERFECT\n",n);
        else if(sum<n)
            pf("%5d  DEFICIENT\n",n);
        else
            pf("%5d  ABUNDANT\n",n);
    }
    pf("END OF OUTPUT\n");
    return 0;
}
