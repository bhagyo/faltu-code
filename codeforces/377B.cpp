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

int ar1[sz];
int ar2[sz];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,x,y,z,m,a,b,k,tc,cnt,res,val1,val2;
    sci2(n,m);
    val1=val2=0;
    for(i=0; i<n; i++)
    {
        sci(ar1[i]);
        ar2[i]=ar1[i];
    }
    for(i=0;i<n-1;i++)
    {
        res=ar1[i]+ar1[i+1];
        if(res<m)
        {
            ar1[i+1]+=(m-res);
            val1+=(m-res);
        }
    }
    for(i=0;i<n-1;i++)
    {
        res=ar2[i]+ar2[i+1];
        if(res<m)
        {
            ar2[i]+=(m-res);
            val2+=(m-res);
        }
    }
    if(val1<=val2)
    {
        pfi(val1);
        for(i=0;i<n;i++)
            pf("%d ",ar1[i]);
    }
    else
    {
        pfi(val2);
        for(i=0;i<n;i++)
            pf("%d ",ar2[i]);
    }
    return 0;
}

/*
input:


output:

*/
