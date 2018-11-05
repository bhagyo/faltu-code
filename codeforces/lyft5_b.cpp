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
#define sz 100005
#define sz1 201

/******   start your code   *******/

struct details
{
    lld pos,val;
    int pro,id;
    details()
    {
        val=100000000000000;
    }
};

details arr[sz];
int taxi[sz];
lld res[sz];
lld arekta[sz];
int main()
{
    lld i,j,k,l,n,m,lnow,rnow;
    bool lft,rgt;
    sf("%lld %lld",&n,&m);

    for(i=0; i<n+m; i++)
        sf("%lld",arr[i].pos);

    for(i=0,k=0; i<n+m; i++)
    {
        sf("%d",arr[i].pro);
        taxi[k++]=i;
    }
    for(i=0;i<=100000;i++)
        res[i]=100000000000000;




    for(i=0;i<k;i++)
    {
        rgt=lft=false;
        lnow=rnow=taxi[i];
        while(1)
        {
            if(lft==true and rgt==true) break;
            if(lnow>0 and arr[lnow-1].pro!=1)
            {
                res[taxi[i]]=min( res[taxi[i]],   (lld)llabs(arr[lnow-1].pos-arr[lnow].pos)  );
                lnow--;
            }
            else lft=true;

            if(rnow>n-1 and arr[rnow+1].pro!=1)
            {
                res[taxi[i]]+=(lld)llabs(arr[rnow+1].pos-arr[rnow].pos);
                rnow++;
            }
            else rgt=true;
        }

    }




    return 0;
}

/*
5
1 3 4 2 5
Outp
*/
