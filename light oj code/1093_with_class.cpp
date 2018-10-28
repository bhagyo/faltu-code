#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef unsigned long long int llu;

#define sf scanf
#define pf printf
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define sz 100005

class see
{
public:
    int mnn,mxx;
    see()
    {
        mnn=mxx=0;
    }
};
see tree[3*sz];
int arr[sz];
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].mnn=arr[b];
        tree[node].mxx=arr[b];
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    build(lft,b,mid);
    build(rgt,mid+1,e);
    tree[node].mnn=min(tree[lft].mnn,tree[rgt].mnn);
    tree[node].mxx=max(tree[lft].mxx,tree[rgt].mxx);
}
see que(int node,int b,int e,int i,int j)
{
    see tmp;
    if(i>e || j<b)
    {
        tmp.mnn=100000009;
        tmp.mxx=0;
        return tmp;
    }
    if(b>=i and e<=j) return tree[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    see tp1=que(lft,b,mid,i,j);
    see tp2=que(rgt,mid+1,e,i,j);
    tmp.mxx=max(tp1.mxx,tp2.mxx);
    tmp.mnn=min(tp1.mnn,tp2.mnn);
    return tmp;
}
int main()
{
    int n,d,i,l,r;
    int res,j;
    see ask;
    TEST //take test as test case vaiable
    {
        sci2(n,d);
        for(i=1;i<=n;i++) sf("%d",&arr[i]);
        build(1,1,n);
        l=1,r=d;
        res=INT_MIN;
        while(r<=n)
        {
            ask=que(1,1,n,l,r);
            j=ask.mxx-ask.mnn;
            res=max(res,j);
            l++;
            r++;
        }
        pf("Case %d: %d\n",test,res);
    }
    return 0;
}

/*
input:
4
6 2
6 0 8 8 8 4
8 3
13 8 0 19 12 4 1 13
8 3
19 8 4 13 12 1 0 13
2 2
1 1

output:

*/
