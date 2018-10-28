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
#define wh while
#define PI acos(-1.0)
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size4 1009
#define size5 10009
#define size6 100009
#define size7 1000009
#define size8 10000009

/******   start your code   *******/

C str1[size6],ch;

int main()
{
    int val,k,i,j,cases;
    LLD store;
    sf("%d%c",&cases,&ch);
    //
    FOR1(k,cases)
    {
        ch=1;
        val=0;
        gets(str1);
        store=strlen(str1);
        while(val<store/2)
        {
            if(str1[val]!=str1[store-val-1])
            {
                ch=0;
                break;
            }
            val++;
        }
        (ch==1)?pf("1\n"):pf("2\n");
    }
    return 0;
}
