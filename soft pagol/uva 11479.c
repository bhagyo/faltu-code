#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/

int main()
{
    LD a,b,c,j,i,cases;
    sf("%ld",&cases);
    for(i=1; i<=cases; i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if((a+b)<=c || (b+c)<=a || (c+a)<=b)
            pf("Case %ld: Invalid\n",i);
        else if(a<=0 || b<=0 || c<=0)
            pf("Case %ld: Invalid\n",i);
        else if(a==b && b==c)
            pf("Case %ld: Equilateral\n",i);
        else if(a==b || b==c || c==a)
            pf("Case %ld: Isosceles\n",i);
        else
            pf("Case %ld: Scalene\n",i);
    }
    return 0;
}

