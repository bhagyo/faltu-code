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
#define sz 10005
#define sz1 201

/******   start your code   *******/

struct point
{
    int x,y,z;
    point()
    {
        x=y=z=0;
    }
};
struct dhal
{
    int x,y,z;
    dhal(point a,point b)
    {
        x=a.x-b.x;
        y=a.y-b.y;
        z=a.z-b.z;
    }
    bool operator <(dhal arekta) const
    {
        if(x!=arekta.x) return x<arekta.x;
        if(y!=arekta.y) return y<arekta.y;
        return z<arekta.z;
    }
};

int main()
{
    int i,j,k,l,m,n,res,cnt,store;
    point a,b;
    sci(n);
    sci3(a.x,a.y,a.z);
    set<dhal> mpp;
    for(i=1;i<n;i++)
    {
        sci3(b.x,b.y,b.z);
        mpp.insert(dhal(a,b));
    }
    cout<<mpp.size()<<endl;
    return 0;
}

/*
1 2 2
..
Outp
*/
