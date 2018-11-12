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
#define sz 2005
#define sz1 100005

/******   start your code   *******/

int main()
{
    lld b,n,lo,mid,hi,res,i,j,baki;
    TEST // "test" as variable
    {
        sf("%lld %lld",&n,&b);
        if(n<=b) pfi(0);
        else if((n/2)<=b)
        {
            pf("%lld\n",n-b);
        }
        else
        {
            res=n-b;
            lo=1,hi=(n-(n%b))/b;
            while(lo<hi)
            {
                mid=(lo+hi)/2;
                //pf("age   %lld %lld %lld\n",lo,hi,mid);
                baki=n-mid*b;
                if(baki*mid>=res){
                    lo=mid+1;
                    res=baki*mid;
                }
                else
                {
                    hi=mid;
                }
                //pf("pore  %lld %lld %lld %lld\n",lo,hi,mid,res);
            }
            pf("%lld\n",res);
        }
    }

    return 0;
}

/*
input:

output:

*/





















