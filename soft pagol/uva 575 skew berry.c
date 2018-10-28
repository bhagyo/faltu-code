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

int main()
{
    LLD i,j,k,l,m,n,o,ck,len,save,store,sum;
    C num[40];
    while(sf("%s",num)==1)
    {
        if(num[0]=='0')
            break;
        sum=k=0;
        len=strlen(num);
        for(i=len; i>=1; i--,k++)
        {
            store=num[k]-48;
            if(store>0)
                sum+=store*(pow(2,i)-1);
        }
        pf("%lld\n",sum);
    }
    return 0;
}









