/******   HAREE KRISHNA   *******/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
/*#include<algorithm>*/

/*using namespace std;*/
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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,x,cases) for(i=x;i<=cases;i++)
#define FOR2(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 199999


/******   start your code   *******/


LLD total(LLD num)
{
    LLD store;
    store=num/3*2;
    if(num%3==0 || num%3==1)
        return store;
    else
        return ++store;
}

int main()
{
    int i,j,k,cases;C ck;
    LLD first,last;
    sf("%d",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        sf("%lld %lld",&first,&last);
        first--;
            pf("Case %d: %lld\n",k,total(last)-total(first));
    }
    return 0;
}






