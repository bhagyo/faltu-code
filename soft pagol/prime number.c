///Haree krishna
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
typedef int D;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
#define FOR(i,b,e) for(i=b;i<=e;i++)/// 'i' used as integer, 'b' start,'e' exit

/*******   start coding here   *******/

int main()
{
    LLU i,j,k,num,store;
    sf("%llu",&num);
    pf("1 2 3");
    FOR(i,4,num)
    {
        if((i&1)==0)
            continue;
        else
        {
            k=sqrt(i);
            FOR(j,2,k)
            if((i%j)==0)
                break;
        }
        if(j>k)
            pf(" %llu",i);
    }
    return 0;
}




