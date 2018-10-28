/****** HAREE KRISHNA   ******/

//#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>
#include<list>
#include<climits>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define rep(i,x,cases) for(i=x;i<cases;i++)
#define repin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%ld",&x)
#define scl2(x,y) scanf("%ld %ld",&x,&y)
#define scl3(x,y,z) scanf("%ld %ld %ld",&x,&y,&z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 100005

/******   start your code   *******/

pair<int,int> pr[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,m,a,b,k,tc,temp,res,n,store,w,l,num2,num3,num,low,hig,mid;
    //TEST // "test" as variable
    //while(1)
    {
        sf("%lld %lld %lld",&n,&w,&l);
        rep(i,0,n)
        {
            sf("%lld %lld",&pr[i].ff,&pr[i].ss);
        }
        low=0;hig=17;
        k=0;
        while(low<=hig)
        {
            pf("before %lld %lld %lld\n",low,mid,hig);
            key=true;
            temp=res=0;
            mid=(low+hig)/2;
            rep(i,0,n)
            {
                temp=pr[i].ff+(pr[i].ss*mid);
                if(temp>=l)
                    res+=temp;
                if(res>=w)
                {
                    key=false;
                    break;
                }
            }
            if(res==w)
                break;
            if(key)
                low=mid-1;
            else
            {
                store=mid;
                hig=mid+1;
            }
            pf("after %lld %lld %lld\n",low,mid,hig);
            k++;
            if(k==10)
                break;
        }
        pf("%lld\n",mid);
    }
    return 0;
}

/*
input:
3 74 51
2 2
5 7
2 9

output:

*/
