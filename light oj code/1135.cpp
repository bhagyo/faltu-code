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
struct see
{
    int prp,n1,n2,n3;
    see()
    {
        prp=n1=n2=n3=0;
    }
};
see tre[sz*3];
int ar[sz];
void bild(int node,int i,int j)
{
    if(i==j)
    {
        tre[node].prp=0;
        tre[node].n1=0;
        tre[node].n2=0;
        tre[node].n3=0;
        return;
    }
    int lft=node*2;
    int rgt=2*node+1;
    int mid=(i+j)>>1;
    bild(lft,i,mid);
    bild(rgt,mid+1,j);
}
void update(int node,int b,int e,int i,int j)
{
    if(e<i or j<b) return;
    if(i>=b and e<=j)
    {
        if(tre[node].prp==0)
        {
            tre[node].n1=(e-b+1);
        }
    }
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)>>1;
    update(lft,b,mid,i,j);
    update(rgt,mid+1,e,i,j);
    tre[node].sum=tre[lft].sum+tre[rgt].sum+tre[node].prp*(e-b+1);
}
int qury(int node,int b,int e,int i,int j)
{
    if(e<i or j<b) return;
    if(i>=b and e<=j)
    {

    }
}
int qury(int node,int b,int e,int i,int j)
{
    if(e<i or j<b) return;
    if(i>=b and e<=j)
    {
        if(tre[node]%3==0)
            return (e-b+1);
        else return 0;
    }
}
int main()
{
    int n,q,i,j,val,x;
    TEST
    {
        sci2(n,q);
        while(q--)
        {

        }

    }
    return 0;
}

/*
input:

output:

*/
