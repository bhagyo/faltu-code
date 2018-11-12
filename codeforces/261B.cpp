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
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 5
#define sz 200005

/******   start your code   *******/

lld arr[sz];
int main()
{
    lld i,j,n,num,store,mx,mn,boro,choto;
    //TEST // "test" as variable

    mx=INT_MIN;
    mn=INT_MAX;
    sf("%lld",&n);
    for(i=0; i<n; i++)
    {
        sf("%lld",&arr[i]);
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    boro=choto=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==mx) boro++;
        else if(arr[i]==mn) choto++;
    }
    pf("%lld ",mx-mn);
    if(mx==mn) pf("%lld\n",(n*(n-1))/2);
    else       pf("%lld\n",boro*choto);

    return 0;
}

/*
input:


output:

*/
