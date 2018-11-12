/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি রাগ, নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

#define sf scanf
#define pf printf
#define rg register
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

#define mp make_pair

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 28
#define sz1 300005

/******   start your code   *******/

char str[sz1];
vector<int> vec[sz1];
int vis[sz1];
int feq[sz1][sz],ans;
int dfs(int x)
{
    vis[x]=-1;
    int i,j,k,l;
    l=vec[x].size();
    for(i=0; i<l; i++)
    {
        if((!vis[vec[x][i]]&&!dfs(vec[x][i]))|| vis[vec[x][i]]==-1)
            return 0;
        for(j=0; j<26; j++)
            feq[x][j]=max(feq[x][j],feq[vec[x][i]][j]);
    }
    ans=max(ans,++feq[x][str[x-1]-'a']);
    return vis[x]=1;
}
int main()
{
    int i,j,k,l,m,n;
    sci2(n,m);
    scs(str);
    for(i=0; i<m; i++)
    {
        sci2(k,l);
        vec[k].pb(l);
    }
    for(i=1; i<=n; i++)
        if(!vis[i] && !dfs(i))
        {
            pfi(-1);
            return 0;
        }
    pfi(ans);
    return 0;
}
/*
input:


output:

*/

