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
#define eps 1e-9


#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
llu CONST=18446744073709551616;

/******   start your code   *******/

#define sz 65522 /// after 65521,this prime the value pow(prime>65521,4) croess 2e64
#define sz1 1000000

llu arr[sz1];

llu power(llu base,llu pw)
{
    llu res=1,y=base;
    while(pw>0)
    {
        if(pw&1) res=res*y;
        y=(y*y);
        pw/=2;
    }
    return res;
}
int N=sz;
bool status[sz];
void seive()
{
    int i,j,sqrtN;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    sqrtN=sqrt(N);
    for(i=3; i<=sqrtN; i+=2)
        if(status[i]==0)
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
}
void total_pick()
{
    llu i,j,k,l=0,store,base;
    for(j=4; j<64; j++)
        if(status[j]==1)
            arr[l++]=pow(2,i);
    for(i=3; i<=sz; i+=2)
        if(status[i]==0)
            for(j=4; j<64; j++)
                if(status[j]==1)
                {
                    store=power(i,j);
                    if(store<CONST)
                        arr[l++]=store;
                    else break;
                }
    sort(arr,arr+l);
    FOR(i,0,l)
        pf("%lld\n",arr[i]);
}
int main()
{
    seive();
    total_pick();
    return 0;
}











