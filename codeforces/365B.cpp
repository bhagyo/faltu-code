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

typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define PI acos(-1.0)
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

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 1005
#define sz 100005

/******   start your code   *******/

int arr[sz];
bool mark[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,c,k,tc,num1,num2,store,num;
    //TEST // "test" as variable
    //while(1)
    sci2(n,k);
    lld res=0,total=0,cnt,tmp,bad;
    sci(arr[1]);
    total+=arr[1];
    for(i=2;i<=n;i++)
    {
        sci(arr[i]);
        total+=arr[i];
        res+=(arr[i]*arr[i-1]);
        //pfi(res);
    }
    res+=(arr[1]*arr[n]);
    store=0;
    //pfi(res);
    //for(i=1;i<=k;i++) sci(see[i]);
    while(k--)
    {
        sci(num);
        tmp=total;
        mark[num]=1;
        if(num==1)
            cnt=total-(arr[1]+arr[2]+arr[n]);
        else if(num==n)
            cnt=total-(arr[n]+arr[n-1]+arr[1]);
        else cnt=total-(arr[num]+arr[num-1]+arr[num+1]);
        tmp-=bad;

        if(mark[x-1])

        store=num;
    }
    pf("%lld\n",res);
    return 0;
}

/*
input:

output:

*/
