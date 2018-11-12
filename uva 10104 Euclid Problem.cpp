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
#define nn prldf("\n")
#define pb push_back
#define chk prldf("chek\n")
#define chk1 prldf("chek1\n")
#define chk2 prldf("chek2\n")
#define sz 200

/******   start your code   *******/

ld xGCD(ld a, ld b, ld &x, ld &y)
{
    ld x1, y1;
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ld gcd = xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

int main()
{
    ld x,y;
    ld res,num1,num2;
    while(sf("%ld %ld",&num1,&num2)==2)
    {
        res=xGCD(num1,num2,x,y);
        pf("%ld %ld %ld\n",x,y,res);
    }
    return 0;
}
