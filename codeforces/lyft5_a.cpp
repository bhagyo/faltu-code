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
#define sz 10005
#define sz1 201

/******   start your code   *******/


const int dx[]={1,1,0,-1,-1,-1,0,1};
const int dy[]={0,1,0};

int main()
{
    lld x,y,i,j,k,l,wx,wy,bx,by,n,wmov,bmov;
    wx=wy=1;
    sf("%lld",&n);
    bx=by=n;
    sf("%lld %lld",&x,&y);
    wmov=bmov=0;
    wmov+=(lld)llabs((x-wx));
    wmov+=(lld)llabs((y-wy));

    //pf("%lld %lld\n",x,y);
    bmov+=(lld)llabs((x-bx));
    bmov+=(lld)llabs((y-by));
    //pf("%lld %lld\n",wmov,bmov);
    if(wmov==bmov)        pfs("White");
    else if(wmov>bmov+1)  pfs("Black");
    else                  pfs("White");
    //main();
    return 0;
}

/*
5
1 3 4 2 5
Outp
*/
