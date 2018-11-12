/****** HAREE KRISHNA   ******/

//#include<bits/stdc++.h>
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

typedef long long int lld;
typedef double lf;
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
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 1005
#define sz 10005

/******   start your code   *******/

int N=sz;
bool status[sz];
int arr[sz];
int cnt=1;
void seive()
{
    int i,j,k,sqrtN;
    arr[cnt++]=2;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    sqrtN=sqrt(N);
    for(i=3; i<=sqrtN; i+=2)
        if(status[i]==0)
        {
            arr[cnt++]=i;
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
        }
    for(i=sqrtN+1; i<=sz; i++)
        if(status[i]==0)
            arr[cnt++]=i;
    //for(i=1;i<cnt;i++)
    //pfi(arr[i]);
}
int print[sz];
int main()
{
    seive();

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,num;
    while(1)
    {
        sci(num);
        int pos=lower_bound(arr,arr+cnt+1,num)-arr;
        pfi(pos);
    }
    return 0;
}

/*
input:

output:

*/
