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

    lld n,k,a,b,x,cnt,cost1,cost2,cost3,i,j,baki,ace;
    sf("%lld %lld %lld %lld",&n,&k,&a,&b);
    ace=0;
    cost1=0;
    x=n;
    if(k==1)
    {
        cost1=(n-1)*a;
        pf("%lld\n",cost1);
        return 0;
    }
    while(x!=1)
    {
        //ace++;
        if(x%k==0)
        {
            baki=x/k;
            ace=x-baki;
            if(b>a*ace)
            {
                cost1+=(a*ace);
                x=baki;
            }
            else
            {
                cost1+=b;
                x=baki;
            }
        }
        else
        {
            baki=x/k;
            if(baki==0)
            {
                cost1+=((x-1)*a);
                break;
            }
            cost1+=((x-(baki*k))*a);
            x=baki*k;
        }

    }
    cost2=(n-1)*a;
    pf("%lld\n",min(cost1,cost2));
    //main();
    return 0;
}
/*
input:


output:

*/

