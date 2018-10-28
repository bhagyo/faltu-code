/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি  রাগ,নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

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

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 2005
#define sz1 100005

/******   start your code   *******/

lld val[800008];
vector<lld>vec[800008];
lld vis[800008];
bool path[800008];
void bfs(lld s,lld n)
{
    queue<lld> qu;
    lld cnt=1;
    qu.push(s);
    vis[s]=0;
    path[s]=1;
    while(!qu.empty())
    {
        int u=qu.front();
        qu.pop();
        for(int i=0; i<vec[u].size(); i++)
            if(vis[vec[u][i]]==-1)
            {
                int v=vec[u][i];
                path[v]=1;
                vis[v]=vis[u]+1;
                qu.push(v);
            }
        cnt++;
    }
}
int main()
{
    bool key;
    C ch1,ch2;
    lld i,j,k,m,n,t,g,u,v;
    TEST
    {
        mem(vis,-1);
        mem(path,0);
        sf("%lld %lld",&n,&m);
        for(i=1; i<=m; i++) sf("%lld",&val[i]);
        for(i=1; i<=n; i++)
        {
            sf("%lld %lld",&u,&v);
            vec[u].pb(v);
            vec[v].pb(u);
        }
        sf("%lld %lld",&t,&g);
        bfs(t,g);
        pf("Case %d: ",test);
        if(path[g]==0) pfs("Path not found\n");
        else if(val[g]-vis[g]<=0) pfs("Don’t travel\n");
        else pf("%lld\n",val[g]-vis[g]);
        //for(i=1;i<=7;i++)
        //    printf("%lld ",vis[i]);
        for(i=0;i<=800008;i++)
            vec[i].clear();
    }

    return 0;
}

/*
input:
1
6 7
10 10 10 10 10 10 10
1 2
2 3
3 4
5 6
6 7
5 7
1 7
output:

*/
