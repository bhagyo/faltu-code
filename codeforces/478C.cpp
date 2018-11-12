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
typedef pair<int,int> pii;

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

#define mp make_pair

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 200005
#define sz1 100005

/******   start your code   *******/

lld pwr[sz];
//lld arw[sz];
lld com[sz];

int main()
{
    lld i,j,k,l,m,n,arw,q,o,baki,ace,st,ekhn,lagbe,lo,mid,hi;
    sf("%lld %lld",&n,&q);
    for(i=0;i<n;i++)
    {
        sf("%lld",&pwr[i]);
        if(i==0) com[i]=pwr[i];
        else     com[i]=com[i-1]+pwr[i];
    }
    st=0;
    for(k=0;k<q;k++)
    {
        sf("%lld",&arw);
        lo=st,hi=n-1;
        while(lo<hi)
        {
            mid=(lo+hi)>>1;
            if(com[])
        }
    }
    return 0;
}
/*
input:


output:

*/
