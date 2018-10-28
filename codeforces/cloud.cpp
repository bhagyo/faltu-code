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
#define sz 1000006
#define sz1 201

/******   start your code   *******/

struct sob
{
    lld lft,rgt,core,pric;
    sob()
    {
        lft=rgt=core=pric=1;
    }
};
bool fun(sob a,sob b)
{
    if(a.pric<b.pric) return true;
    return false;
}
struct node
{
    lld sum,prp,lagbe;
    node()
    {
        sum=prp=0;
        lagbe=INT_MAX;
    }
};

node tre[3*sz];
sob arr[200005];
lld ans=0;

void update(lld node,lld b,lld e,lld i,lld j,lld core,lld pric)
{
    if (i>e||j<b) return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}
int main()
{
    lld i,j,k,l,tot,baki,next,n,m;
    sf("%lld %lld %lld",&n,&k,&m);
    for(i=1; i<=m; i++)
        sf("%lld %lld %lld %lld",&arr[i].lft,&arr[i].rgt,&arr[i].core,&arr[i].pric);
    sort(arr+1,arr+1+m,fun);
    for(i=1; i<=m; i++)
    {
        update(1,1,n,arr[i].lft,arr[i].rgt,arr[i].core,arr[i].pric);
    }
    return 0;
}

/*
5
1 3 4 2 5
Outp
*/
