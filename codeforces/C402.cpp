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

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 12
#define sz1 200005

/******   start your code   *******/

class data
{
public:
    int a,b;
    data()
    {
        a=b=0;
    }
};
data arr[sz1];
data ar2[sz1];
bool com(data v1,data v2)
{
    if(v1.a<v2.a)
    {
        return true;
    }
    else if(v1.a==v2.a)
    {
        if(v1.b<v2.b)
            return true;
    }
    return false;
}
bool com1(data v1,data v2)
{
    if(v1.b<v2.b) return true;
    if(v1.b==v2.b)
    {
        if(v1.a>v2.a) return true;
    }
    return false;
}
int main()
{
    bool key;
    C ch1,ch2;
    lld i,j,n,k,l,tot,rem;
    sf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
        sci(arr[i].a);
    for(i=0;i<n;i++)
        sci(arr[i].b);
    sort(arr,arr+n,com);
    tot=0;
    for(i=0;i<k;i++)
        tot+=arr[i].a;
    for(i=k;i<n;i++)
    {
        if(arr[i].a<arr[i].b) tot+=arr[i].a;
        else tot+=arr[i].b;
    }
    rem=0;
    sort(arr,arr+n,com1);
    for(i=0;i<n-k;i++) rem+=arr[i].b;
    for(i=n-k;i<n;i++) rem+=arr[i].a;
    pf("%lld %lld\n",rem,tot);
    return 0;
}

/*
input:


output:

*/
