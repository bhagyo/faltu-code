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
ASCII Value
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

lld ar[200006],taxi[200006],ekhn[200006],total[200006];
int main()
{
    lld m,a,b,n,g,d,x,y,z,p,q,mn,mx,ans;
    sf("%lld%lld",&n,&m);
    x=0;
    for(int i=1; i<=m+n; i++)
    {
        sf("%lld",&ar[i]);
    }
    for(int i=1; i<=m+n; i++)
    {
        sf("%lld",&taxi[i]);
        if(taxi[i]==1)
        {
            x+=1;
            ekhn[x]=i;
        }
    }
    x=1;
    mn=10000000000000;
    mx=ar[ekhn[x]];
    for(int i=1; i<=m+n; i++)
    {
        if(taxi[i]==1)
        {
            mn=mx;
            x+=1;
            mx=ar[ekhn[x]];
        }
        else
        {
            if(abs(ar[i]-mn)>abs(ar[i]-mx))
                total[ekhn[x]]+=1;
            else
                total[ekhn[x-1]]+=1;
        }
    }
    for(int i=1; i<=m+n; i++)
        if(taxi[i]!=0)
            pf("%lld ",total[i]);
    return 0;
}
