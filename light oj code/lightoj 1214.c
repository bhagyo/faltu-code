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
#define size 1000
/******   start your code   *******/

C num[size],ch;
int main()
{
    LLD i,j,k,cases,ck1;
    LLD num1;
    sf("%d%c",&cases,&ch);
    FOR1(k,cases)
    {
        sf("%s %lld",num,&num1);
        num1=(num1>0)?num1:(num1*(-1));
        ck1=0;
        for(i=0; num[i]; i++)
        {
            if(num[i]=='-')
                continue;
            ck1=ck1*10+(num[i]-'0');
            ck1%=num1;
        }
        if(ck1==0)
            pf("Case %d: divisible\n",k);
        else
            pf("Case %d: not divisible\n",k);
    }
    return 0;
}
