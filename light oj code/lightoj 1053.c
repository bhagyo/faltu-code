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
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size 199999
/******   start your code   *******/

LLU num[3],temp;
int main()
{
    int i,j,k,ck,loop;
    sf("%d",&loop);
    FOR1(k,loop)
    {
        scanf("%llu %llu %llu",&num[0],&num[1],&num[2]);
        if(num[0]==0&&num[1]==0&&num[2]==0)
            break;
        for(i=0; i<2; i++)
            for(j=i+1; j<3; j++)
                if(num[i]>num[j])
                {
                    temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                }
        if((num[0]*num[0]+num[1]*num[1])==num[2]*num[2])
            printf("Case %d: yes\n",k);
        else
            printf("Case %d: no\n",k);
    }
    return 0;
}
