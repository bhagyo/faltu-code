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
typedef unsigned long long int llu;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define pii pair<int,int>
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
#define sz 55
#define sz1 201

/******   start your code   *******/

struct node
{
    int vv,cost;
    node() {};
    node(int _vv,int _cost)
    {
        vv=_vv;
        cost=_cost;
    }
};
bool operator < (node a,node b)
{
    return a.cost>b.cost;
}
vector<pair<int,int> > detail[sz];
bool vis[sz];
int cost[sz];
priority_queue<node> pq;
int mst(void)
{
    int i,j,tot,loop;
    tot=0;
    pq.push(node(1,0));
    while(!pq.empty())
    {
        node xx=pq.top();
        pq.pop();
        if(vis[xx.vv]) continue;
        vis[xx.vv]=true;
        tot+=xx.cost;
        loop=detail[xx.vv].size();
        for(i=0; i<loop; i++)
        {
            int now    = detail[xx.vv][i].first;
            int weight = detail[xx.vv][i].second;
            if(vis[now]) continue;
            if(weight<cost[now])
            {
                pq.push(node(now,weight));
                cost[now]=weight;
            }
        }
    }
    return tot;
}
int main()
{
    //freopen("output.txt","w",stdout);
    int i,j,sum,n,val,mi,mj;
    bool key;
    TEST
    {
        sum=0;
        key=true;
        sci(n);
        for(i=1; i<=n; i++)
        {
            cost[i]=1000;
            for(j=1; j<=n; j++)
            {
                sci(val);
                sum+=val;
                if(i==j or val==0) continue;
                detail[j].pb(make_pair(i,val));
                detail[i].pb(make_pair(j,val));
            }
        }
        val=mst();
        for(i=1;i<=n;i++)
            if(!vis[i]) key=false;
        if(key)
            pf("Case %d: %d\n",test,sum-val);
        else
            pf("Case %d: -1\n",test);

        mem(detail,0);
        mem(vis,false);
        //while(!pq.empty()) pq.pop();
    }
    return 0;
}

/*
3
2
27 26
1 52
4
0 10 10 0
0 0 1 1
0 0 0 2
0 0 0 0
4
0 1 0 0
1 0 0 0
0 0 0 1
0 0 1 0
Outp
*/
