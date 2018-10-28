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
int bubble_sort(LD str[],int ar_len)
{
    int i,j,temp;
    for(i=0;i<ar_len-1;i++)
        for(j=i+1;j<ar_len;j++)
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
    return str[0];
}
LD age[10000];
int main()
{
    int bachelor,spinster,fao,i,cases=1;
    while(sf("%d %d",&bachelor,&spinster)==2&&bachelor!=0&&spinster!=0)
    {
        for(i=0;i<bachelor;i++)
            sf("%ld",&age[i]);
        for(i=0;i<spinster;i++)
            sf("%d",&fao);
        if(bachelor<=spinster)
            pf("Case %d: 0\n",cases++);
        else
            pf("Case %d: %d %d\n",cases++,bachelor-spinster,bubble_sort(age,bachelor));
    }
    return 0;
}
