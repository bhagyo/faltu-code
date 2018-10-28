#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
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
#define size 105
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/

int main()
{
    LLD num,store;
    int cases;
    sf("%d",&cases);
    while(cases--)
    {
        sf("%lld",&num);
        if(num==0)
        {
            pf("36962\n");
            continue;
        }
        store=num*315+36962;
        store=store/10;
        store=store%10;
        if(store<0)
            store=store*(-1);
        pf("%lld\n",store);
    }
    return 0;
}
