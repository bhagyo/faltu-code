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

#define mpa make_pair

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define mod 1000000007
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 105
#define sz1 100001

/******   start your code   *******/

int a[sz1],b[sz1],c[sz1],as[sz1],cs[sz1],p,q,r,i;

int binup1(int val)
{
    int lo=0,hi=p;
    int best=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)>>1;
        if(a[mid]<=val)
        {
            if(a[mid]==val) best=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return best;
}
int binup2(int val)
{
    int lo=0,hi=r;
    int best=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)>>1;
        if(c[mid]<=val)
        {
            if(c[mid]==val) best=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return best;
}
int main()
{
    lld res;
    TEST
    {
        res=0;
        sci3(p,q,r);

        for(i=1;i<=p;i++) sci(a[i]);
        for(i=1;i<=q;i++) sci(b[i]);
        for(i=1;i<=r;i++) sci(c[i]);

        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);

        for(i=1;i<=p;i++) as[i]=a[i]+as[i-1];
        for(i=1;i<=r;i++) cs[i]=c[i]+cs[i-1];

        for(i=1;i<=p;i++) pf("%d ",as[i]);
        nn;
        for(i=1;i<=p;i++) pf("%d ",cs[i]);
        nn;

        for(i=1;i<=q;i++)
        {
            int y=b[i];
            int age=binup1(y);
            int pore=binup2(y);
            pfi3(y,age,pore);

            if(age==-1 or pore==-1) break;
            res=res+( ((as[age]+age*y)%mod)*((cs[pore]+pore*y)%mod))%mod;

            pf("loop = %d  %lld\n",i,res);
        }

        pf("%lld\n",res);
        mem(as,0);
        mem(cs,0);
    }
    return 0;
}

/*
input:

output:

*/
