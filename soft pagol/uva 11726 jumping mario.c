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

int main()
{
    int i,j,cases;
    int high,low,jump,max;
    sf("%d",&cases);
    for(j=1;j<=cases;j++)
    {
        max=high=low=0;
        sf("%d",&jump);
        int pill[jump];
        for(i=0;i<jump;i++)
            sf("%d",&pill[i]);
        if(jump==1)
        {
            pf("Case %d: 0 0\n",j);
            continue;
        }
        for(i=1;i<jump;i++)
        {
            if(pill[i]>pill[i-1])
                high++;
            else if(pill[i]<pill[i-1])
                low++;
        }
        pf("Case %d: %d %d\n",j,high,low);
    }
    return 0;
}












