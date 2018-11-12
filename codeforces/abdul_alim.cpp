#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>
#include<list>
#include<climits>

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
#define ff first
#define ss second
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

#define pfl(x) printf("%lld\n",x)
#define pfl2(x,y) printf("%lld %lld\n",x,y)
#define pfl3(x,y,z) printf("%lld %lld %lld\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 5000005
#define sz 10000009

/******   start your code   *******/

int N=sz-1;
bool status[sz];
int arr[sz1];
void seive()
{
    int i,j,k,sqrtN;
    k=0;arr[0]=2;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    for(i=3; i<=N; i+=2)
        if(status[i]==0)
        {
            arr[++k]=i;
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
        }
    pf("k = %d\n",k);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    seive();
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,m,a,b,k,tc,cnt,res,total,num1,num2,store,num;
    TEST // "test" as variable
    //while(1)
    {
        sf("%lld",&num);
        store=sqrt(num);
        while(!(num%2)) num/=2;
        res=1;
        for(i=1;arr[i]<=store;i++)
        {
            if(num%arr[i]==0)
            {
                total=0;
                while(num%arr[i]==0)
                {
                    total++;
                    num=num/arr[i];
                }
                res=res*(total+1);
            }
            store=sqrt(num);
        }
        if(num!=1) res*=2;
        pf("Case %d: %lld\n",test,res-1);
    }
    return 0;
}

/*
input:


output:

*/