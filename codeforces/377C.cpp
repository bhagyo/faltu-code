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

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,o,z,m,a,b,k,tc,cnt,res;

    lld arr[sz1];
    sf("%lld%lld%lld",&m,&n,&o);
    lld mn=min(m,min(n,o));
    m-=mn;
    n-=mn;
    o-=mn;
    lld mx=max(m,max(n,o));
    mx*=3;
    arr[0]=m;
    arr[1]=n;
    arr[2]=o;
    sort(arr,arr+3);
    if(mx-(m+n+o)!=0)
    {
        if(arr[1]==arr[2])
            pf("%lld\n",mx-(m+n+o)-1);
        else pf("%lld\n",mx-(m+n+o)-2);
    }
    else
        pf("%lld\n",mx-(m+n+o));
    return 0;
}

/*
input:


output:

*/
