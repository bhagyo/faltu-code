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
#define sz 100005
#define sz1 10

/******   start your code   *******/

vector<int>vec[sz];
bool vis[sz];
int lvl[sz];
double prob[sz];
int n,i,j,k,u,v;
void bfs()
{
    double res=0.00;
    vis[1]=1;
    lvl[1]=1;
    int k=1;
    prob[k++]=1.0000;
    queue<int> qq;
    qq.push(1);
    while(!qq.empty())
    {
        int u=qq.front();
        qq.pop();
        for(i=0; i<vec[u].size(); i++)
        {
            if(vis[vec[u][i]]==0)
            {
                vis[vec[u][i]]=1;
                qq.push(vec[u][i]);
                if(u==1)
                {
                    prob[vec[u][i]]=prob[u]/((double) vec[u].size());
                    //chk1;
                }
                else
                    prob[vec[u][i]]=prob[u]/((double) (vec[u].size())-1.00);
                //pf("chk %lf %lf %d\n",prob[u],(double) vec[u].size(),u);
            }
        }
    }
    for(i=2; i<=n; i++)
    {
        //pf("see  %0.lf  %lf   \n",res,prob[i]);
        res+=prob[i];
    }
    pf("%0.19lf\n",res);
}
int main()
{
    sci(n);
    for(i=0; i<n-1; i++)
    {
        sci2(u,v);
        vec[u].pb(v);
        vec[v].pb(u);
    }
    bfs();
    return 0;
}

/*
input:
4
1 2
1 3
2 4

output:

*/
