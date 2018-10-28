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
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
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
#define size 92

/******   start your code   *******/

C bingo[size];
int balls[size];
int main()
{
    int i,j,k,cases;
    int N,B,val;
    C ck;
    while(sf("%d %d",&N,&B)==2 && N!=0 &&B!=0)
    {
        ck=1;
        FOR(i,B)
        sf("%d",&balls[i]);
        for(i=0; i<B; i++)
            for(j=i; j<B; j++)
            {
                val=abs(balls[i]-balls[j]);
                bingo[val]=1;
            }
        for(i=0; i<=N; i++)
            if(bingo[i]==0)
            {
                ck=0;
                break;
            }
        (ck==1)?pf("Y\n"):pf("N\n");
        for(i=0; i<=N; i++)
            bingo[i]=0;
    }
    return 0;
}
