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
//#define ff first
//#define ss second
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
#define sz 105
#define sz1 200005

/******   start your code   *******/

int n,k,s,t;
class data
{
public:
    int ff,ss;
};

data car[sz1];
int gas[sz1];
bool ispos(int tank)
{
    //pf("tank = %d\n",tank);
    int time=0;
    for(rg int i=1; i<=k+1; i++)
    {
        int dist=gas[i]-gas[i-1];
        //pf("dist = %d\n",dist);
        if(tank>=dist)
        {
            if(tank>=2*dist)
                time+=dist;
            else
            {
                int baki=tank-dist;
                time+=(baki+2*(dist-baki));
            }
        }
        else return false;
        //pf("time = %d\n",time);
        if(time>t) return false;
    }
    return true;
}
int main()
{
    int i,j,l;
    sci3(n,k,s);
    sci(t);
    for(i=0; i<n; i++)
        sci2(car[i].ff,car[i].ss);
    for(i=1; i<=k; i++) sci(gas[i]);
    gas[k+1]=s;
    sort(gas+1,gas+k+2);
    int lo=0,hi=s,mid,lagbe=INT_MAX;
    while(lo<=hi)
    {
        mid=(lo+hi)>>1;
        if(ispos(mid))
        {
            lagbe=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    //pfi(lagbe);
    int res=INT_MAX;
    for(i=0; i<n; i++)
        if(car[i].ss>=lagbe)
            res=min(res,car[i].ff);
    if(res==INT_MAX) pfi(-1);
    else pfi(res);
    return 0;
}

/*
input:
3 1 8 10
10 8
5 7
11 9
3
output:

*/
