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
#define sz 2005
#define sz1 300005

/******   start your code   *******/

pair<lf,lf> pr[sz1];
vector<lf> arr[sz1];
lf dist(pair<lf,lf> x,pair<lf,lf>y)
{
    return sqrt((x.ff-y.ff)*(x.ff-y.ff)+(x.ss-y.ss)*(x.ss-y.ss));
}
int main()
{
    bool key;
    C ch1,ch2;
    int i,j,q,n,res,cnt;
    lf r,up,down;
    while(sci2(n,q))
    {
        if(!n and !q) break;
        for(i=0;i<n;i++)
            sf("%lf %lf",&pr[i].ff,&pr[i].ss);
        for(i=0;i<n;i++)
        {
            cnt=1;
            for(j=0;j<n;j++)
            {
                if(i==j) continue;
                if(pr[i]==pr[j]) cnt++;
                else if(dist(pr[i],pr[j])<=r)
                    cnt++;
            }

        }
        while(q--)
        {
            res=0;
            sf("%lf",&r);
            for(i=0;i<n;i++)
            {
                cnt=1;
                for(j=0;j<n;j++)
                {
                    if(i==j) continue;
                    if(pr[i]==pr[j]) cnt++;
                    else if(dist(pr[i],pr[j])<=r)
                        cnt++;
                }
                res+=cnt;
                //pf("res = %d n = %d\n",res,n);
            }
            up=res;
            down=n;
            pf("%0.2lf\n",up/down);
        }
    }
    return 0;
}

/*
input:
4  3
1  1
1  2
12  3
40  40
1
10
100
0  0

output:

*/
