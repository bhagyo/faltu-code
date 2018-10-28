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
#define size 1000001

/******   start your code   *******/


int N=size;
C status[size];
void seive()
{
    int i,j,k,sqrtN;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    sqrtN=sqrt((LD)N);
    for(i=3; i<=sqrtN; i+=2)
        if(status[i]==0)
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
}

int main()
{
    seive();
    int i,flag,x,y,num;
    while(scanf("%d",&num)==1 && num!=0)
    {
        printf("%d:\n",num);
        flag =0;
        for(i=1;i<=num/2;i++)
        {
            if(status[i]==0 && status[num-i]==0)
            {
                x=i;
                y=num-i;
                flag=1;
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("%d+%d\n",x,y);
        else
            printf("NO WAY!\n");
    }
    return 0;
}

