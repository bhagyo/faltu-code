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


set<int>s;
vector<int>v[sz1];
bool vis[sz1];
int mxE,mxN=INT_MAX;
map<int,int>mp[sz1];
queue<int>q;

void bfs(int s)
{
    int i,j,k,e,n,x,l;
    n=1;
    e=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        l=v[x].size();
        for(i=0; i<l; i++)
        {
            if(mp[x][v[x][i]]!=0 || mp[v[x][i]][x]!=0)
            {
                e+=mp[x][v[x][i]];
                mp[x][v[x][i]]=0;
                mp[v[x][i]][x]=0;
            }

            if(!vis[v[x][i]])
            {
                n++;
                vis[v[x][i]]=1;
                q.push(v[x][i]);
            }
        }
    }
    if(e>mxE)
    {
        mxE=e;
        mxN=n;
    }
    else if(e==mxE && n<mxN)
    {
        mxE=e;
        mxN=n;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,n,m,a,b;
    TEST
    {
        sci2(n,m);
        for(i=0; i<m; i++)
        {
            sci2(a,b);
            if(mp[a][b]==0 && mp[b][a]==0){
            v[a].pb(b);
            v[b].pb(a);
            }
            mp[a][b]++;
            mp[b][a]++;
            s.insert(a);
            s.insert(b);
        }
        set<int> :: iterator it;
        for(it=s.begin(); it!=s.end(); it++)
        {
            if(!vis[*it])
            {
                bfs(*it);
            }
        }
        pf("Case %d: %d %d\n",test,mxE,mxN);
        for(i=0; i<=sz1; i++)
        {
            vis[i]=0;
            v[i].clear();
            mp[i].clear();
        }
        s.clear();
        mxE=0;
        mxN=INT_MAX;
    }
    return 0;
}

/*
2
7 6
1 2
1 3
2 4
5 6
5 7
6 7
100 11
1 2
1 4
2 4
2 3
6 7
7 8
9 10
9 11
10 11
11 12
10 12

*/
