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

LLD jack[10000000];
int main()
{
    LLD i,j,k,l,n_jack,n_jill,cd,count,max;
    while(sf("%lld %lld",&n_jack,&n_jill)==2)
    {
        if(n_jack==0 && n_jill==0)
            break;
        max=count=0;
        for(i=0; i<n_jack; i++)/*jack's cd*/
        {
            sf("%lld",&cd);
            jack[cd]=1;
            if(cd>max)
                max=cd;
        }
        for(i=0; i<n_jill; i++)
        {
            sf("%lld",&cd);
            if(jack[cd]==1)/*whether it's same as jack's cd or not*/
                count++;
            if(cd>max)
                max=cd;
        }
        pf("%lld\n",count);
        for(i=0; i<=max; i++)
            jack[i]=0;
    }
    return 0;
}
