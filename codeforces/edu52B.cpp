/****** HAREE KRISHNA   ******/

#include<bits/stdc++.h>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 5
#define sz 200005

/******   start your code   *******/


int main()
{
    //while(1)
    {
    lld n,m,iso,i,j,k,store,baki;
    sf("%lld %lld",&n,&m);
    if(m==0)
    {
        pf("%lld %lld\n",n,n);
        return 0;
    }
    if(m==1)
    {
        pf("%lld %lld\n",max(0*1LL,n-2),max(0*1LL,n-2));
        return 0;
    }
    if(0>=n-(m*2)) pf("0 ");
    else           pf("%lld ",n-(m*2));
    iso=0;
    for(i=2;i<=n;i++)
    {
        store=i*(i-1);
        store/=2;
        if(store>=m)
        {
            iso=i;
            break;
        }
    }
    iso=max(0*1LL,n-iso);
    pf("%lld\n",iso);}
    return 0;
}

/*
input:


output:

*/
