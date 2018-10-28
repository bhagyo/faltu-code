/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

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
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 100000009

/******   start your code   *******/

C status[size];

void seive()
{
    long long i,j,k,sum=0;
    for(i=1;i<=10999;i++)
    {
        sum+=i;
        status[sum]=1;
    }
    pf("sum = %lld\n",sum);
}

int main()
{
    seive();
    long long cases,i;
    sf("%lld",&cases);
    while(cases--)
    {
        sf("%lld",&i);
        if(status[i]==1)
            pf("%lld eh perfeito\n",i);
        else
            pf("%lld nao eh perfeito\n",i);
    }
    return 0;
}
