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

int arr[sz][sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    bool key1,key2;
    C ch1,ch2,ch;
    int i,j,k,tc,res,total,temp,mx,num,num1,num2;
    int n,m;
    //sci(tc);
    //while(1)
    //rep(k,0,tc)
    {
        sf("%d %d",&n,&m);
        getchar();
        rep(i,0,n)
        {
            rep(j,0,m)
            {
                ch=getchar();
                arr[i][j]=ch-48;
            }
            getchar();
        }
        res=0;
        rep(i,0,n)
        {
            key1=false;
            rep(j,0,m)
            {
                key2=true;
                rep(k,0,n)
                if(arr[k][j]>arr[i][j])
                    key2=false;
                if(key2) key1=true;
            }
            if(key1) res++;
        }
        pfi(res);
    }
    return 0;
}


























