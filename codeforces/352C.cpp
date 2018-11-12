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
#define mp make_pair

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 200010

/******   start your code   *******/

vector< pair <int,int> >pr;

lf dist(int ax,int ay,int bx,int by)
{
    lf X=ax-bx;
    lf Y=ay-by;
    return sqrt((X*X)+(Y*Y));
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,total,temp,num1,num2,store,num,pon;

    lf res,ans,dist1,dist2;

    int adil,bera,lockA,lockB;

    int ax,ay,bx,by,tx,ty;
    //TEST // "test" as variable
    //while(1)
    {

        ans=0;
        sf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&tx,&ty);
        sci(n);
        rep(i,0,n)
        {
            sci2(num1,num2);
            pr.pb(mp(num1,num2));
        }

    }
    return 0;
}

/*
input:

3 1 1 2 0 0
3
1 1
2 1
2 3

output:

*/
