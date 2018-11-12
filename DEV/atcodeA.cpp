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

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 1005
#define sz 5

/******   start your code   *******/
lld arr[sz];
lld pr[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,m,a,b,c,k;
    //TEST // "test" as variable
    //while(1)
    key=true;
    for(i=0; i<3; i++) sf("%lld",&arr[i]);
    sort(arr,arr+3);
    for(i=0; i<3; i++)
        if((arr[i]&1)==0)
        {
            key=false;
            pfi(0);
            break;
        }
    if(key)
    {
        lld res=(arr[0]*arr[1]);
        res-=(arr[0]*(arr[1]-1));
        pr[0]=arr[2]*res;

        res=(arr[1]*arr[2]);
        res-=(arr[1]*(arr[2]-1));
        pr[1]=arr[0]*res;

        res=(arr[0]*arr[2]);
        res-=(arr[0]*(arr[2]-1));
        pr[2]=arr[1]*res;
        sort(pr,pr+3);
        pf("%lld\n",pr[0]);
    }
    return 0;
}

/*
input:

output:

*/
