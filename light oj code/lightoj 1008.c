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
#define sq(x) (x*x)
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
#define chk2 printf("chek2\n")
#define size 199999

/******   start your code   *******/

int main()
{
    int i,j,k,cases;C ck;
    LLD sec,store,x,y;
    sf("%d",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        sf("%lld",&sec);
        store=sqrt(sec);
        if(sec-sq(store)==0)//jodi number ta purno borgo number hoy
        {
            if(store&1)
                pf("Case %d: 1 %lld\n",k,store);
            else
                pf("Case %d: %lld 1\n",k,store);
            continue;
        }
        else
        {
            if((sq(store)+(store+1))>=sec)
                x=sec-sq(store),y=store+1;
            else
                x=store+1,y=(store+1)*(store+1)-sec+1;
        }
        if(store&1)
            pf("Case %d: %lld %lld\n",k,x,y);
        else
            pf("Case %d: %lld %lld\n",k,y,x);
    }
    return 0;
}
