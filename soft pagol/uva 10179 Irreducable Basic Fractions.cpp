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
#define sz 31627

/******   start your code   *******/

ld phi(ld num)
{
    if(num==1)
        return 1;
    ld res=num;
    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            while (num%i==0) num/=i;
            res-=res/i;
        }
    }
    if(num>1)
        res-=res/num;
    return res;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ld i,j,k,l,num,res;
    C ch;
    while(sf("%ld",&num)==1 && num!=0)
    {
        if(num==1)
        {
            pf("0\n");
            continue;
        }
        pf("%ld\n",phi(num));
    }
    return 0;
}
