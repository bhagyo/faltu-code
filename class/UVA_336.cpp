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
#define sz 100005
#define sz1

/******   start your code   *******/


map<int,int> vis;
map<int,vector<int> > way;
int strt,ttl;
void bfs()
{
    queue<int> qq;
    qq.push(strt);
    vis[strt]=0;
    while(!qq.empty())
    {
        int tp=qq.front();
        qq.pop();
        int loop=way[tp].size();
        for(int i=0;i<loop;i++)
            if(!vis.count(way[tp][i]))
            {
                vis[way[tp][i]]=vis[tp]+1;
                qq.push(way[tp][i]);
            }
    }
}
int main()
{
    int i,edge,a,b,node,cs=1;
    while(sci(node) && node)\
    {
        way.clear();
        for(i=0;i<node;i++)
        {
            sci2(a,b);
            way[a].pb(b);
            way[b].pb(a);
        }
        while(sci2(strt,ttl) and (strt!=0 or ttl!=0))
        {
            map<int,int> ::iterator it;
            vis.clear();
            int res=0;
            int store=way.size();

            bfs();

            for(it=vis.begin();it!=vis.end();++it)
                if(it->ss>ttl) res++;
            res+=(store-vis.size());

            if(store==1 and ttl==0) res=0;
            else if(store!=1 and ttl==0) res=store-1;
            if(way.count(strt)>0)
            pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cs++,res,strt,ttl);
            else
                pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cs++,store,strt,ttl);
        }
    }
    return 0;
}

/*
input:


output:

*/
