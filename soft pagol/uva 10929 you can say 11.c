/******   HAREE KRISHNA   *******/
#include<stdio.h>
#include<string.h>
#include<strings.h>
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
#define middle(x,y,z) (y>=x&&x<=z)?x:((x>=y&&y<=z)?y:z)
#define size 199999
/******   start your code   *******/

int main()
{
    int i,j,sum;
    LLD ck;
    C num[1050];
    while(sf("%s",&num)==1)
    {
        ck=atoll(num);
        if(ck==0)
            break;
        sum=0;
        for(j=0; num[j]; j++)
        {
            sum=sum*10+num[j]-48;
            sum=sum%11;
        }
        if(sum==0)
            pf("%s is a multiple of 11.\n",num);
        else
            pf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
