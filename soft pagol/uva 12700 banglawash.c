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

int main()
{
    int i,j,k,l,cases,matches;
    int B,W,T,A;
    C situ[11],fao;
    sf("%d",&cases);
    FOR1(k,cases)
    {
        scanf("%d%c",&matches,&fao);
        char str[11];
        scanf("%s",str);
        A=B=T=W=0;
        for(i=0; i<matches; i++)
        {
            if(str[i]=='A')/* Abandoned match */
                A++;
            else if(str[i]=='B')/* winning match of bangladesh*/
                B++;
            else if(str[i]=='T')/* tied match */
                T++;
            else if(str[i]=='W')/* winning match of other*/
                W++;
        }
        if((W+A==matches) && W!=0 && B==0)
            printf("Case %d: WHITEWASH\n",k);
        else if((B+A==matches)&& B!=0 && W==0)
            printf("Case %d: BANGLAWASH\n",k);
        else if(A==matches)
            printf("Case %d: ABANDONED\n",k);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",k,B,W);
        else if(B<W)
            printf("Case %d: WWW %d - %d\n",k,W,B);
        else if(B==W)
            printf("Case %d: DRAW %d %d\n",k,W,T);
    }
    return 0;
}
