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

struct paici
{
    lld sum,prp;
    paici()
    {
        sum=prp=0;
    }
};
paici tre[3*sz];
int ar[sz];
void bild(int node,int b,int e)
{
    if(b==e)
    {
        tre[node].sum=ar[b];
        tre[node].prp=0;
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    bild(lft,b,mid);
    bild(rgt,mid+1,e);
    tre[node].sum=(tre[lft].sum+tre[rgt].sum);
    tre[node].prp=0;
}
void update(int node,int b,int e,int i,int j,int val)
{
    if(i>e or j<b) return;
    if(b>=i and e<=j)
    {
        tre[node].sum+=((e-b+1)*val);
        tre[node].prp+=val;
        return;
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    update(lft,b,mid,i,j,val);
    update(rgt,mid+1,e,i,j,val);
    tre[node].sum=tre[lft].sum+tre[rgt].sum+(e-b+1)*tre[node].prp;
}
lld qury(int node,int b,int e,int i,int j,lld cary=0)
{
    if(i>e or j<b)
        return 0;
    if(b>=i and e<=j)
        return tre[node].sum+cary*(e-b+1);
    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)>>1;
    lld p1=qury(lft,b,mid,i,j,cary+tre[node].prp);
    lld p2=qury(rgt,mid+1,e,i,j,cary+tre[node].prp);
    return p1+p2;
}

int main()
{
    int i,j,n,q,typ,x,y,v;
    lld res;
    TEST
    {
        mem(ar,0);
        sci2(n,q);
        pf("Case %d:\n",test);
        bild(1,1,n);
        while(q--)
        {
            sci(typ);
            if(typ==0)
            {
                sci3(x,y,v);
                update(1,1,n,x+1,y+1,v);
            }
            if(typ==1)
            {
                sci2(x,y);
                res=qury(1,1,n,x+1,y+1);
                pf("%lld\n",res);
            }
        }
    }
    return 0;
}

/*
input:
2
10 5
0 0 9 10
1 1 6
0 3 7 2
0 4 5 1
1 5 5
20 3
0 10 12 1
1 11 12
1 19 19
output:

*/
