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


int main()
{
    int cases,i,j,k,a,store;
    int num[4],IP[4];
    char ch;
    scanf("%d",&cases);
    FOR1(i,cases)
    {
        ch=1;
        sf("%d.%d.%d.%d",&num[0],&num[1],&num[2],&num[3]);
        sf("%d.%d.%d.%d",&IP[0],&IP[1],&IP[2],&IP[3]);
        pf("Case %d: ",i);
        for(j=0; j<4; j++)
        {
            k=store=0;
            while(IP[j]!=0)
            {
                a=IP[j]%10;
                IP[j]=IP[j]/10;
                store+=(a*pow(2,k));
                k++;
            }
            if(store!=num[j])
            {
                ch=0;
                break;
            }
        }
        (ch==1)?pf("Yes\n"):pf("No\n");
    }
    return 0;
}
