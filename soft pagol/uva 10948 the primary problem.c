/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORc(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 1000100000

/******   start your code   *******/


int N=size;
C status[size],ch0=0,ch1=1;
void seive()
{
    int i,j,k,sqrtN;
    status[0]=1;
    status[1]=1;
    for(i=4;i<=N;i+=2)
        status[i]=ch1;
    sqrtN=sqrt((LD)N);
    for(i=3;i<=sqrtN;i+=2)
        if(status[i]==ch0)
            for(j=i+i;j<=N;j+=i)
                status[j]=ch1;
}

int main()
{
    LD i,j,a,b,p,q,get,k;
    LD num,bin,paici,store,sq_store,temp,ck,save,sq_save;
    while(sf("%ld",&num)==1)
    {
        bin=1;
        if(num==0)
            break;
        get=num/2+1;/* for getting half of the number*/
        if(num==4)
        {
            pf("%ld:\n2+2\n",num);
            bin=0;
        }
        else
            for(k=2; k<=get; k++)
            {
                paici=ck=bin=1;
                save=k;/*get the number*/
                store=num-k;  /*get the couple number*/
                sq_save=sqrt(save);
                sq_store=sqrt(store);
                for(j=2; j<=sq_save; j++)
                    if(save%j==0)
                    {
                        paici=0;
                        break;
                    }
                if(paici==1)
                {
                    for(j=2; j<=sq_store; j++)
                        if(store%j==0)
                        {
                            ck=0;
                            break;
                        }
                    if(paici==1&&ck==1)
                    {
                        pf("%ld:\n%ld+%ld\n",num,save,store);
                        bin=0;
                        break;
                    }
                }
            }
        if(bin==1)
            pf("NO WAY!\n");
    }
    return 0;
}
