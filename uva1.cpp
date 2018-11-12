#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
#include<queue>
#include<map>
#include<string.h>
#include<vector>
#include<bitset>
#include<algorithm>

using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define sz 1000002
#define sz1 103
#define sz2 1003

/******   start your code   *******/

class gust
{
public:
    int si;
    int fi;
    int val;
};
vector<gust>v;
bool compare(gust a,gust b)
{
    if(a.fi>=b.si)
    {


         return a.val>b.val;
    }
    else
    {
            return a.fi<b.fi;
    }

}
int main()
{
    int i,j,k,T,x,n,N,ln,y,m,mx,a,b,r;
    bool key;
    gust g;
    while(sf("%d",&N)!=EOF)
    {
        for(i=0; i<N; i++)
        {
            sf("%d%d%d",&g.si,&g.fi,&g.val);
            v.push_back(g);
        }
        sort(v.begin(),v.end(),compare);
        mx=v[0].val;
        pf("mx=%d\n",mx);
        for(i=1; i<N; i++)
        {
            if(v[i-1].fi<=v[i].si)
                mx+=v[i].val;
            else if(v[i-1].fi>v[i].fi)
            {
                mx+=v[i].val;
                pf("hi...%d %d\n",v[i].val,v[i-1].val);
            }
        }
        pf("%d\n",mx);
        v.clear();
    }
    return 0;
}
