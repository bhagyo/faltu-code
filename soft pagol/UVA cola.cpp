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
#define size 1999999
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

/******   start your code   *******/

int main()
{
    int n,k,s,b,tb,r;
    k=3;
    while(sf("%d",&n)==1)
    {
        s=n;
        tb=0;
        while(s>=k)
        {
            b=s/k;
            r=s%k;
            s=b+r;
            tb=tb+b;
        }
        if(s==2)
            tb++;
        pf("%d\n",n+tb);
    }
    return 0;
}












