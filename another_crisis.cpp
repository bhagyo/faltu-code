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
vector<int>arr[sz];
int n,t;
int dfs(int kk)
{
    int arekta[sz];
    //pf("kk = %d\n",kk);
    if(arr[kk].empty()) return 1; //sobar niche asci

    int lop=arr[kk].size();

    for(int i=0;i<lop;i++)
        arekta[i]=dfs(arr[kk][i]);

    sort(arekta,arekta+lop);

    double lgbe=ceil(double(lop*t)/100.0);
    int lagbe=lgbe;

    //pf("lagbe  = %d ,kk = %d\n",lagbe,kk);

    int ans=0;
    for(int i=0;i<lagbe;i++)
        ans+=arekta[i];
    return ans;
}
int main()
{
    int i,j,k,l,boss,tot;
    while(sf("%d %d",&n,&t)!=EOF and( n!=0 or t!=0))
    {
        for(i=1;i<=n;i++)
        {
            sci(boss);
            arr[boss].pb(i);
        }
        pf("%d\n",dfs(0));
        for(i=0;i<=n;i++) arr[i].clear();
    }
    return 0;
}

/*
3 100
0 0 0
3 50
0 0 0
14 60
0 0 1 1 2 2 2 5 7 5 7 5 7 5
0 0
Outp
*/
