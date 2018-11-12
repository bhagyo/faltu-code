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

#define sf                scanf
#define pf                printf
#define PI                acos(-1.0)
#define sq(x)             (x)*(x)
#define rep(i,x,cases)    for(i=x;i<cases;i++)
#define repin(i,cases,x)  for(i=cases;i>=x;i--)
#define nn                printf("\n")

#define sci(x)            scanf("%d",&x)
#define scii(x,y)         scanf("%d %d",&x,&y)
#define pb                push_back

#define chk1              printf("chek1\n")
#define chk2              printf("chek2\n")
#define chk3              printf("chek3\n")
#define sz                999999

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ld i,j,k,tc,res,total,temp,mx,num1,num2;
    bool ck;
    ld N,M,arr[sz];
    sf("%ld",&tc);
    getchar();
    while(tc--)
    {
        sf("%ld %ld",&N,&M);
        rep(i,1,M+1) sf("%ld",&arr[i]);
        sort(arr,arr+(M+1));
        temp=0;
        rep(i,1,M+1)
        {
            temp+=arr[i];
            if(temp>=(M-i-1)) break;
        }
        if( temp > (M-i-1)) pf("%ld\n",M-i);
        else pf("%ld\n",M-i-1);
    }
    return 0;
}
