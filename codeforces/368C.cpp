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
#define sz 100005

/******   start your code   *******/

class city
{
public:
    lld frm,to,dis;
};
city cty[sz];
bool mark[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,m,a,b,k,u,v,l,res=99999999999;
    lld tk1,tk2;
    //TEST // "test" as variable
    //while(1)
    sf("%lld %lld %lld",&m,&n,&k);
    for(i=1;i<=n;i++)
        sf("%lld %lld %lld",&cty[i].frm,&cty[i].to,&cty[i].dis);
    for(i=0;i<k;i++)
    {
        sf("%lld",&j);
        mark[j]=true;
    }
    key=false;
    for(i=1;i<=n;i++)
        if((mark[cty[i].frm] and !mark[cty[i].to])or(!mark[cty[i].frm]and mark[cty[i].to]))
        {
            key=true;
            res=min(res,cty[i].dis);
        }
    if(key) pf("%lld\n",res);
    else pfi(-1);
    return 0;
}

/*
input:

output:

*/
