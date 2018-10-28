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
#define rep(i,x,cases) for(i=x;i<cases;i++)
#define repin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define mem(str,val) memset(str,val,sizeof(str))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%ld",&x)
#define scl2(x,y) scanf("%ld %ld",&x,&y)
#define scl3(x,y,z) scanf("%ld %ld %ld",&x,&y,&z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")

#define mod 1000003
#define eps 10e-8
#define sz 200005
#define sz1 56
#define sz2 1000005
/******* start my code ********/

class vers
{
public:
    int x,y,id;
    vers()
    {
        x=y=id=0;
    }
};
vers str[sz];
map<int,int>mymap;
int ad[sz];
int st[sz];
bool comymap(vers a,vers b)
{
    if(a.x!=b.x)
        return a.x>b.x;
    else if(a.x==b.x) return a.y>b.y;
}
int main()
{
    int i,j,k,x,ans,l,n,mn,t,N_mn,mx,m,a,b;
    lld  f,low,high,mid,val;
    char ch,ch1;
    bool key=1,flag=1;
    sci(n);
    for(i=0; i<n; i++)
    {
        sci(a);
        mymap[a]++;
    }
    sci(m);
    for(i=0; i<m; i++)
        sci(ad[i]);
    for(i=0; i<m; i++)
        sci(st[i]);
    for(i=0; i<m; i++)
    {
        str[i].x=mymap[ad[i]];
        str[i].y=mymap[st[i]];
        str[i].id=i;
    }
    sort(str,str+m,comymap);

    pfi(str[0].id+1);
    return 0;
}


/*
input:

output:

*/
