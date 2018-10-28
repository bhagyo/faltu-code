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
#define eps 1e-9
#define another 1000000000+7
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
#define sz1 201

/******   start your code   *******/

struct point
{
    double xx,yy;
    point()
    {
        xx=yy=0;
    }
};
point arr[sz];
bool nici[sz];
set<double>sss;
int main()
{
    int i,j,k,n,store,ex,tot;
    double nox,noy,dhal,niche;
    sci(n);
    for(i=0;i<n;i++) scanf("%lf %lf",&arr[i].xx,&arr[i].yy);
    if(n<=4)
    {
        pfs("YES");
        return 0;
    }
    nox=arr[0].xx;
    noy=arr[0].yy;
    niche=arr[1].xx-nox;
    if(niche)
    dhal=(arr[1].yy-noy)/niche;

    for(i=1;i<n;i++)
    {
        niche=arr[i].xx-nox;
        if(niche)
        {

        }
    }
    return 0;
}

/*
1 2 2
..
Outp
*/
