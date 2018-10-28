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
#define sz 1000005

/******   start your code   *******/

vector <lld> arr,arr1;
int main()
{
    freopen("A-large-practice.in","r",stdin);
    freopen("A-large-practice.out","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,k,tc,res,ans,temp,num1,num2,num3,num;
    TEST // test as variable print
    //while(1)
    {
        sf("%lld",&num);
        rep(i,0,num)
        {
            sf("%lld",&temp);
            arr.pb(temp);
        }
        rep(i,0,num)
        {
            sf("%lld",&temp);
            arr1.pb(temp);
        }
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end(),greater <int> ());;
        res=0;
        rep(i,0,num)
            res+=(arr[i]*arr1[i]);
        pf("Case #%d: %lld\n",test,res);
        arr.clear();
        arr1.clear();
    }
    return 0;
}

/*
2
3
1 3 -5
-2 4 1
5
1 2 3 4 5
1 0 1 0 1


*/
