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
#define size 199999
/******   start your code   *******/


int ar[10000000];
int main()
{
    int i, a, b, counter, val, s, temp, min;
    while (scanf("%d %d",&a,&b)==2)
    {
        if (!a && !b) return 0;
        counter=0;
        for (i=0 ; i<a ; i++)
            scanf("%d",&ar[i]);
        for (i=0, s=0 ; i<b ; i++)
        {
            scanf("%d",&temp);
            for ( ; temp>=ar[s] && s<a ; s++)
                if (ar[s] == temp)
                {
                    counter++;
                    break;
                }
        }
        printf("%d\n",counter);
    }
    return 0;
}
