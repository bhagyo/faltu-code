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

lld ar[sz];
lld sm[sz];
int main()
{
    lld n,i,res,tot,tc,cnt;
    TEST
    {
        sf("%lld",&n);
        for(i=0; i<n; i++) sf("%lld",&ar[i]);
        sm[0]=ar[0];
        for(i=1; i<n; i++)
            sm[i]=sm[i-1]+ar[i];
        //for(i=0; i<n; i++) pf("%d ",sm[i]);
        res=n-1;
        cnt=ar[n-1];
        tot=sm[n-1]+cnt;
        if(n==1) pfi(1);
        else
        {
            for(i=n-2; i>=0; i--)
            {
                cnt+=ar[i];
                if(tot>=sm[i]+cnt)
                {
                    res=i;
                    tot=sm[i]+cnt;
                }
                //pfi3(tot,cnt,sm[i]);
            }
            pf("%lld\n",res+1);
        }
        mem(sm,0);
        mem(ar,0);
    }
    return 0;
}

/*
input:
2
3
1 2 3
4
2 1 3 1

output:

*/
