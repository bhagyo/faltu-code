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
typedef long double LLF;
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
#define size 199999

/******   start your code   *******/

C ch;
int main()
{
    int i,j,k,cases;
    int row,colum;
    sf("%d",&cases);
    getchar();
    FOR1(k,cases)
    {
        sf("%d %d",&row,&colum);
        pf("%d\n",(row/3)*(colum/3));
    }
    return 0;
}
