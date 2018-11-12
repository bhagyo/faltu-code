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
#define sz1 5
#define sz 100005

/******   start your code   *******/

int arr[sz];
int pos[sz];
bool win[sz];
int main()
{
    int i,j,n,k,l,hoice,baki,ace,lagbe;
    sci(n);
    for(i=1; i<=n; i++)
    {
        sci(arr[i]);
        pos[arr[i]]=i;
    }
    if(n==1)
    {
        pfs("B");
        return 0;
    }
    win[pos[1]]=true;
    for(i=n-1; i>=2; i--)
    {
        for(j=pos[i]%i; j<=n; j+=i)
        {
            //pf("j = %d, i = %d\n",j,i);
            if(!win[j] and i<arr[j])//
            {
                win[pos[i]]=true;//win[pos[i]]
                //pf("j = %d,pos[i] = %d\n",j,pos[i]);
            }
        }
        //chk1;
    }
    for(i=1; i<=n; i++)
        if(win[i]) pf("A");
        else       pf("B");
    nn;
    return 0;
}

/*
input:
15
3 11 2 5 10 9 7 13 15 8 4 12 6 1 14
output:
BAAAABAB

*/
