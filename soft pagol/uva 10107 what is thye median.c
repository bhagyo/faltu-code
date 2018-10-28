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
    LLD store[10009],num,i=0,l,temp,save,j,k,n;
    while(sf("%lld",&num)==1)
    {
        store[i]=num;
        n=i;
        for(k=0; k<n; k++)
            for(j=k+1; j<=n; j++)
                if(store[k]>store[j])
                {
                    temp=store[k];
                    store[k]=store[j];
                    store[j]=temp;
                }
        if(i==0)
            pf("%lld\n",store[0]);
        else if((i&1)==0)
            printf("%lld\n",store[i/2]);
        else
        {
            save=store[i/2]+store[i/2+1];
            pf("%lld\n",save/2);
        }
        i++;
    }
    return 0;
}









