
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
#define size 10000

/******   start your code   *******/

llu modulo(llu a,llu b,llu c)
{
    llu x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y)%c;
        }
        y = (y*y)%c; // squaring the base
        b /= 2;
        pf("%llu %llu %llu\n",b,x,y);
    }
    return x%c;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    llu base,power,mod;
    while(sf("%llu%llu%llu",&base,&power,&mod)==3)
    {
        pf("%llu\n",modulo(base,power,mod));
    }
    return 0;
}




