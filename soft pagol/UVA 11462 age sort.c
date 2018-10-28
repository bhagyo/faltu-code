#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
typedef int D;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
/*****start your code*****/
#define max 2000005
LD ara[max],new_ara[max];
int main()
{
    LD i,j,k,l,big,cases;
    while(sf("%ld",&cases)==1)
    {
        if(cases==0)
            break;
        k=big=0;
        for(i=0; i<max; i++)
            ara[i]=new_ara[i]=0;
        for(i=0; i<cases; i++)
        {
            sf("%ld",&j);
            ara[j]++;
            if(j>big)
                big=j;
        }
        for(i=0; i<=big; i++)
            for(j=0; j<ara[i]; j++)
            {
                new_ara[k]=i;
                k++;
            }
        for(i=0; i<k; i++)
        {
            pf("%ld",new_ara[i]);
            if(i<k-1)
                pf(" ");
        }
        pf("\n");
    }
    return 0;
}


