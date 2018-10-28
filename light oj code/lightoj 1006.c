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
#define PI acos(-1.0)
#define sq(x) x*x
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,x,cases) for(i=x;i<=cases;i++)
#define FOR2(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define ck printf("ck\n")
#define ck1 printf("ck1\n")
#define size 199999

/******   start your code   *******/

int main()
{
    LLD i,n,k,cases,fn[10005];
    scanf("%lld",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&fn[0],&fn[1],&fn[2],&fn[3],&fn[4],&fn[5],&n);
        FOR1(i,6,n)
            fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
        printf("Case %lld: %lld\n",k,fn[n]%10000007);
    }
    return 0;
}
