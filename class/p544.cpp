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

//#define mp make_pair

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 19901
#define sz1 201

/******   start your code   *******/

typedef pair<int,int>pii;
map<string,int>mp;
vector<pii> vec[sz];
int cost[sz1];
bool taken[sz1];
struct node
{
    int u,cost;
    node();
    node(int _u,int _cost)
    {
        u=_u;
        cost=_cost;
    }
};
bool operator <(node a,node b)
{
    return a.cost<b.cost;
}
priority_queue<node> pq;

void prim(int s,int d)
{
    for(int i=0; i<sz1; i++) cost[i]=0;
    mem(taken,false);
    cost[s]=0;
    pq.push(node(s,INT_MAX));
    int ans=INT_MAX;
    while(!pq.empty())
    {
        node tmp=pq.top();
        pq.pop();
        //pfi2(tmp.u,tmp.cost);
        if(taken[tmp.u]) continue;
        taken[tmp.u]=true;
        ans=min(tmp.cost,ans);
        if(tmp.u==d) break;
        for(pii ekhn : vec[tmp.u])
        {
            if(taken[ekhn.ff]) continue;
            if(ekhn.ss>cost[ekhn.ff])
            {
                //chk1;
                //pfi2(ekhn.ss,cost[ekhn.ff]);
                pq.push(node(ekhn.ff,ekhn.ss));
                cost[ekhn.ff]=ekhn.ss;
            }
        }
    }
    pf("%d tons\n\n",ans);
}
/*
input:
4 3
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Muenchen
5 5
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Hamburg 220
Hamburg Muenchen 170
Muenchen Karlsruhe
0 0

output:
*/
int main()
{
    //TEST // "test" as variable
    //freopen("output.txt","w",stdout);
    string s1,s2;
    int val,i,j,city,edge,idx,cs=1;
    while(sci2(city,edge) and city!=0 and edge!=0)
    {
        idx=0;
        for(i=0; i<edge; i++)
        {
            cin>>s1>>s2>>val;
            if(mp[s1]==0) mp[s1]=++idx;
            if(mp[s2]==0) mp[s2]=++idx;
            vec[mp[s1]].push_back(make_pair(mp[s2],val));
            vec[mp[s2]].push_back(make_pair(mp[s1],val));
        }
        cin>>s1>>s2;
        //for (map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
        //cout<<it->first<<"=>"<<it->second<<'\n';
        pf("Scenario #%d\n",cs++);
        prim(mp[s1],mp[s2]);
        mp.clear();
        mem(vec,0);
        pq=priority_queue<node> ();
    }

    return 0;
}























