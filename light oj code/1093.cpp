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
#define sz 1000005
#define sz1 10

int mnn[3*sz];
int mxx[3*sz];
int arr[sz];
void build1(int node,int b,int e)
{
    if(b==e)
    {
        mnn[node]=arr[b];
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    build1(lft,b,mid);
    build1(rgt,mid+1,e);
    mnn[node]=min(mnn[lft],mnn[rgt]);
}
void build2(int node,int b,int e)
{
    if(b==e)
    {
        mxx[node]=arr[b];
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    build2(lft,b,mid);
    build2(rgt,mid+1,e);
    mxx[node]=max(mxx[lft],mxx[rgt]);
}
int quemnn(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 1e8+2;
    if (b >= i && e <= j)
        return mnn[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = quemnn(Left, b, mid, i, j);
    int p2 = quemnn(Right, mid + 1, e, i, j);
    return min(p1 , p2);
}
lld quemxx(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return -1;
    if (b >= i && e <= j)
        return mxx[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = quemxx(Left, b, mid, i, j);
    int p2 = quemxx(Right, mid + 1, e, i, j);
    return max(p1 , p2);
}
int main()
{
    int n,d,i,l,r;
    lld res,mn,mx;
    TEST //take test as test case vaiable
    {
        sci2(n,d);
        for(i=1;i<=n;i++) sf("%lld",&arr[i]);
        build1(1,1,n);
        build2(1,1,n);
        l=1,r=d;
        res=-1;
        while(r<=n)
        {
            mn=quemnn(1,1,n,l,r);
            mx=quemxx(1,1,n,l,r);
            res=max(res,mx-mn);
            l++;
            r++;
        }
        pf("Case %d: %lld\n",test,res);
    }
    return 0;
}

/*
input:
3
6 2
6 0 8 8 8 4
8 3
19 8 4 13 12 1 0 13
2 2
1 1

output:

*/
