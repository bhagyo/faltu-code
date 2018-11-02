#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)
#define sci(x) scanf("%d",&x)
#define pb push_back
#define sz 55

struct node
{
    int st,en,cost;
    node() {}
    node(int _st,int _en,int _cost)
    {
        st=_st;
        en=_en;
        cost=_cost;
    }
};
bool fun(node a,node b)
{
    return a.cost<b.cost;
}
int parent[sz],lop,n;
vector<node> vec;
bool fin(int u,int v)
{
    if(parent[u]==parent[v]) return false;
    return true;
}
void uni(int u,int v)
{
    int temp=parent[u];
    for(int i=1;i<=n;i++)
        if(parent[i]==temp)
            parent[i]=parent[v];
}
int mst(int n)
{
    sort(vec.begin(),vec.end(),fun);
    int cnt=0,tot=0;
    lop=vec.size();
    for(int i=0; i<lop; i++)
    {
        int u=vec[i].st;
        int v=vec[i].en;
        if(fin(u,v))
        {
            uni(u,v);
            tot+=vec[i].cost;
            cnt++;
            if(cnt==n-1) break;
        }
    }
    return tot;
}
set<int> st;
int main()
{
    int i,j,mi,mj,total,res,val;
    TEST
    {
        for(i=0;i<52;i++) parent[i]=i;
        sci(n);
        total=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                sci(val);
                total+=val;
                if(i==j or !val) continue;
                mi=i,mj=j;
                if(mi>mj) swap(mi,mj);
                vec.pb(node(mi,mj,val));
            }
        }
        res=mst(n);
        for(i=1; i<=n; i++)
            st.insert(parent[i]);
        if(st.size()==1)
            pf("Case %d: %d\n",test,total-res);
        else
            pf("Case %d: -1\n",test);
        vec.clear();
        st.clear();
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

1
5
0 1 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 1 0 1
0 0 0 0 0




Outp
*/
