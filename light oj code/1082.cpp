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


int ar[sz];
int tre[3*sz];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tre[node]=ar[b];
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;
    init(lft,b,mid);
    init(rgt,mid+1,e);
    tre[node]=min(tre[lft],tre[rgt]);
}
int que(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)    return sz;
    if(b>=i && e<=j)  return tre[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;
    int p1=que(lft,b,mid,i,j);
    int p2=que(rgt,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int i,q,n,l,r;
    TEST
    {
        sci2(n,q);
        for(i=1;i<=n;i++) sci(ar[i]);
        init(1,1,n);
        pf("Case %d:\n",test);
        while(q--)
        {
            sci2(l,r);
            pf("%d\n",que(1,1,n,l,r));
        }
        mem(ar,0);
        mem(tre,0);
    }
    return 0;
}

/*
input:
2
5 3
78 1 22 12 3
1 2
3 5
4 4
1 1
10
1 1
output:

*/
