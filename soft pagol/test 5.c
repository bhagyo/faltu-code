/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 1000000
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

/******   start your code   *******/

int N=size;
bool status[size];
void pre_seive()
{
    int i,j,k,sqrtN,store,temp;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    sqrtN=sqrt((ld)N);
    for(i=3; i<=sqrtN; i+=2)
        if(status[i]==0)
        {
            temp=0;
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
            store=i;
            while(store)
            {
                temp=store%10;///suuming the digits
                store/=10;
            }
            if(status[store]==0)///cheking whether the sum is prime or not
                status[i]=2;
        }
    if(sqrtN&1==0)
        sqrtN++;
    for(i=sqrtN;i<=N;i+=2)
        if(status[i]==0)
        {
            temp=0;
            while(store)
            {
                temp=store%10;///suuming the digits
                store/=10;
            }
            if(status[store]==0)///cheking whether the sum is prime or not
                status[i]=2;
        }

}

int main()
{
    pre_seive();
    int i,j,k,cases,count;
    C ch;
    sf("%d",&cases);
    getchar();
    for(i=1; i<=cases; i++)
    {
        int st,en;
        sf("%d %d",&st,&en);
        count=0;
        for(k=st;k<=en;k++)
            if(status[k]==2)
                count++;
        pf("%d\n",count);
    }
    return 0;
}











