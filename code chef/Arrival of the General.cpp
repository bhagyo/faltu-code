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

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

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
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define rep(i,x,cases) for(i=x;i<cases;i++)
#define repin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")

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

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 105

/******   start your code   *******/

int arr[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    C ch1,ch2,ch;
    bool key;
    int i,j,k,tc,res,total,temp,mx,mn,num,num1,num2;
    int res1,res2;
    //sci(tc);rep(k,0,tc)
    //while(1)
    {
        res1=res2=0;
        mx=-1;
        mn=10000;
        sci(num);
        rep(i,0,num)
        {
            sci(arr[i]);
            mx=max(mx,arr[i]);
            mn=min(mn,arr[i]);
        }
        rep(i,0,num)
        {
            if(mx==arr[i])
            {
                num1=i;
                break;
            }
            else res1++;
        }
        for(j=num-1; j>=0; j--)
        {
            if(mn==arr[j])
            {
                num2=num-res2;
                break;
            }
            res1++;
            res2++;
        }
        if(num1<num2)
            pfi(res1);
        else pfi(res1-1);
    }
    return 0;
}
