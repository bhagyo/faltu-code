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
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define sz 10000

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ld i,j,k,tc,res;
    ld lwr,upr,store,div,total,num;
    C ch;
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        res=0;
        sf("%ld %ld",&lwr,&upr);
        for(i=lwr; i<=upr; i++)
        {
            div=0;
            store=sqrt(i);
            for(j=1; j<=store; j++)
                if(i%j==0) div+=2;
            if(i/(j-1)==(j-1)) div--;
            if(div>res)
            {
                res=div;
                num=i;
            }
        }
        pf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",lwr,upr,num,res);
    }
    return 0;
}
