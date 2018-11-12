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
#include<bitset>
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
#define PI 3.1415926535897932384626433832795028841971693993
#define sq(x) (x)*(x)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

#define pfl(x) printf("%lld\n",x)
#define pfl2(x,y) printf("%lld %lld\n",x,y)
#define pfl3(x,y,z) printf("%lld %lld %lld\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 105
#define sz 100005

/******   start your code   *******/

vector <int> arr;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //bitset <8> num;
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,total,num,num2,store;
    //TEST // "test" as variable
    //while(1)
    sci(num);
    for(i=0; i<num; i++)
    {
        sci(tc);
        arr.pb(tc);
    }
    sort(arr.rbegin(),arr.rend());
    cnt=0;
    for(i=0; i<num; i++)
        if(i&1) cnt-=(arr[i]*arr[i]);
        else cnt+=(arr[i]*arr[i]);
    pf("%0.5lf",cnt*PI);
    return 0;
}

/*
input:


output:

*/
