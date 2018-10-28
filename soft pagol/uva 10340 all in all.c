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

C first[100000],last[100000];
int main()
{
    LD i,j,ck,sum;
    while(sf("%s",first)!=EOF)
    {
        sf("%s",last);
        sum=j=ck=0;
        for(i=0; first[i]; i++)
            for(j=j; last[j]; j++)
                if(first[i]==last[j])
                {
                    sum++;
                    j++;
                    break;
                }
        if(i==sum)
            pf("Yes\n");
        else
            pf("No\n");
    }
    return 0;
}
