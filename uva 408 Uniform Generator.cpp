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
#define pb push_back
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define sz 50

/******   start your code   *******/

int gcd(int a,int b)
{
    return (b==0)?a:gcd(b,a%b);
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,total,mx,num1,num2;

    while(sf("%d %d",&num1,&num2)==2)
    {
        if(gcd(num1,num2)==1)
            pf("%10d%10d    Good Choice\n\n",num1,num2);
        else
            pf("%10d%10d    Bad Choice\n\n",num1,num2);
    }
    return 0;
}
