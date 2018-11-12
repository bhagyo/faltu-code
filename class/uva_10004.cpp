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
#define sz 2005
#define sz1 100005

/******   start your code   *******/

int main()
{
    bool key;
    C ch1,ch2;
    int i,x,y,m,n,edge,node;
    while(sci(node))
    {
        if(!node) break;
        sci(edge);
        vector<int> ed[sz1];
        queue<int> nod;
        int color[sz1];
        mem(color,-1);
        for(i=0;i<edge;i++)
        {
            sci2(x,y);
            ed[x].pb(y);
            ed[y].pb(x);
        }
        key=false;
        color[0]=0;
        nod.push(0);
        while(!nod.empty())
        {
            x=nod.front();
            nod.pop();
            int ar_s=ed[x].size();
            for(i=0;i<ar_s;i++)
            {
                if(color[ed[x][i]]==-1)
                {
                    if(color[x]==0)
                        color[ed[x][i]]=1;
                    else
                        color[ed[x][i]]=0;
                    nod.push(ed[x][i]);
                }
                else if(color[ed[x][i]]==color[x])
                {
                    key=true;
                    break;
                }
            }
            if(key) break;
        }

        if(key) pf("NOT BICOLORABLE.\n");
        else pf("BICOLORABLE.\n");
    }

    return 0;
}

/*
input:
3
3
0 1
1 2
2 0
3
2
0 1
1 2
9
8
0 1
0 2
0 3
0 4
0 5
0 6
0 7
0 8
0

output:

*/
