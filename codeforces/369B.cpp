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

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 5
#define sz 100005

/******   start your code   *******/

lld arr[505][505];
lld row[505];
lld col[505];
lld dia1[505];
lld dia2[505];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,x,y,z,m,a,b,k,tc,cnt,res;
    //TEST // "test" as variable
    //while(1)
    sf("%lld",&n);
    if(n==1)
    {
        sf("%lld",&m);
        if(m==0) pfi(5);
        else (-1);
        return 0;
    }
    lld total=0;
    for(i=1; i<=n; i++)
    {
        key=true;
        cnt=0;
        for(j=1; j<=n; j++)
        {
            sf("%lld",&arr[i][j]);
            cnt+=arr[i][j];
            if(arr[i][j]==0)
            {
                key=false;
                x=i,y=j;
            }
        }
        if(key)
        {
            total+=cnt;
            row[i]=cnt;
        }
    }
    cnt=0;
    for(i=1; i<=n; i++)
    {
        cnt=0;
        for(j=1; j<=n; j++)
        {
            cnt+=arr[j][i];
            if(arr[i][j]==0)
            {
                cnt=0;
                break;
            }
        }
        col[i]=cnt;
    }
    for(i=1;i<=n;i++)

    res=total;
    total/=(n-1);
    if(res==(total*(n-1)))
    {
        cnt=0;
        for(i=1; i<=n; i++)
            cnt+=arr[x][i];
        pf("%lld\n",total-cnt);
    }
    else pfi(-1);
    return 0;
}

/*
input:


output:

*/
