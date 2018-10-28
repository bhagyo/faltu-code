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

LD gcd(LD a, LD b)
{
    LD r;
    while(b!=0)
    {
        r=b;
        b=a%b;
        a=r;
    }
    return a;
}
int main()
{
    LLD sum;
    LD i,j,cases,num;
    while(sf("%d",&num)==1)
    {
        if(num==0)
            break;
        sum=0;
        for(i=1; i<num; i++)
            for(j=i+1; j<=num; j++)
                sum+=gcd(i,j);
        pf("%lld\n",sum);

    }
    return 0;
}
