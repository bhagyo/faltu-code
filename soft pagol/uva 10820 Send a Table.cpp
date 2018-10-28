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
#define sz 50001

/******   start your code   *******/

int phi[sz];

void calculatePhi()
{
    int i,p;
    for (i = 1; i < sz; i++)
        phi[i] = i;
    for (p = 2; p < sz; p++)
    {
        if (phi[p] == p)
            for (int k = p; k < sz; k += p)
                phi[k] -= phi[k] / p;
        phi[p]=phi[p]+phi[p]+phi[p-1];
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    calculatePhi();
    int i,j,k,tc,res,total,mx;
    C ch;
    while(sf("%d",&tc)==1 && tc!=0)
    {
        pf("%d\n",phi[tc]);
    }
    return 0;
}



