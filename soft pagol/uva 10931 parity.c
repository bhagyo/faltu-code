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

/******   start your code   ******/

int main()
{
    LLD num,num_ar[1000],j;
    int store,i,k,parity;
    while(sf("%lld",&num)==1)
    {
        if(num==0)
            break;
        parity=i=0;
        while(num!=0)
        {
            store=num%2;
            if(store==1)
                parity++;
            num_ar[i++]=(num%2);
            num/=2;
        }
        i--;
        printf("The parity of ");
        for(k=i; k>=0; k--)
            printf("%lld",num_ar[k]);
        printf(" is %d (mod 2).\n",parity);
    }
    return 0;
}
