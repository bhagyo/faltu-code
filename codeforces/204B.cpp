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
#define sz1 1005
#define sz 100005

/******   start your code   *******/

int vis[sz],val[sz],wei[sz];
bool sol[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,total,num1,num2,store,num;
    //TEST // "test" as variable
    //while(1)
    sci(num);
    res=0;
    for(i=1;i<=num;i++)
    {
        sci(tc);
        if(!vis[tc])
        {
            //chk1;
            //pf("incew = %d\n",i);
            res++;
            vis[tc]=1;
            val[tc]=i;
            sol[tc]=true;
        }
        else if(vis[tc]==1)
        {
            vis[tc]++;
            wei[tc]=i-val[tc];
            val[tc]=i;
        }
        else if(sol[tc])
        {
            if(val[tc]+wei[tc]!=i)
            {
                //pf("i = %d\n",i);
                res--;
                sol[tc]=false;
            }
            val[tc]=i;
        }
    }
    pfi(res);
    for(i=1;i<=100000;i++)
        if(sol[i])
            pf("%d %d\n",i,wei[i]);
    return 0;
}

/*
input:

output:

*/
