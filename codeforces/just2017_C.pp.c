#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<algorithm>
#include<set>
#include<limits.h>
#include <sstream>

//#include <bits/stdc++.h>


using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;


/*----------simple input section ------------ */
#define sf scanf
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfll2(x,y) scanf("%lld%lld",&x,&y)
#define sfu2(x,y) scanf("%llu%llu",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfd(x) scanf("%lf",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)


/*----------simple input section ------------ */
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)
#define pfd(x) printf("%lf\n",x)

/*----------file input section ------------ */

#define f_input  freopen("input.txt","r",stdin);
#define f_output freopen("output.txt","w",stdout);

#define pb(x) push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define mem(x,y) memset(x,y,sizeof(x))
#define TEST int cs,T;sfi(T);getchar();for(cs=1;cs<=T;cs++)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1 printf("hi......1  \n")
#define chk2 printf("hi......2  \n")




#define mod  1000000007
#define eps 10e-8
#define sz 10005
#define sz1 300
#define sz2 30
/******* start my code ********/
int cost_t[sz][sz];
vector<int>v[sz];
char str[sz2];
class data
{
public:
    int arr[sz2];
    data()
    {
        for(int i=0; i<27; i++) arr[i]=0;
    }
};
data node[sz];
int func(int a,int b)
{
    int i,sum;
    sum=0;
    for(i=0; i<26; i++)
    {
        if(min(node[a].arr[i],node[b].arr[i])>0)
            sum++;
    }
    return sum;
}
int dist[sz];
class vil
{
public:
    int _at,cost;
    vil()
    {
        _at=0;
        cost=0;
    }
    vil(int a,int b)
    {
        _at=a;
        cost=b;
    }
};
bool operator < (vil a,vil b)
{
    return a.cost>b.cost;
}
priority_queue<vil>pq;
int dijkstra(int source, int destination)
{
    vil u, x;

    u._at = source, u.cost = 0;
    pq.push(u);
    dist[source] = 0;
    int l;
    while(!pq.empty())
    {
        u = pq.top();
        pq.pop();
        l=v[u._at].size();
        for (int i = 0; i < l; i++)
        {
            x._at = v[u._at][i];
            x.cost = cost_t[u._at][x._at] + dist[u._at];
            if(dist[x._at] > x.cost)
            {
                dist[x._at] = x.cost;
                pq.push(x);
            }
        }
    }
    return dist[destination];
}
int main()
{
    int i,j,k,n,m,a,b,s,e;
    sfi2(n,m);
    k=1;
    for(i=0; i<n; i++)
    {
        sfs(str);
        for(j=0; str[j]; j++)
        {
            node[k].arr[tolower(str[j])-'a']++;
        }
        k++;
    }
    for(i=0; i<m; i++)
    {
        sfi2(a,b);
        v[a].pb(b);
        v[b].pb(a);
        cost_t[a][b]=cost_t[b][a]=func(a,b);
    }
    sfi2(s,e);
    mem(dist,9999999);
    pfi(dijkstra(s,e));
    return 0;
}

/*

*
