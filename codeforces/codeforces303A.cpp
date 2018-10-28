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
#define sz 10000

/******   start your code   *******/

int josephus(int n, int k)
{
    //pf("res = %d\n",((n - 1, k) + k-1) % n + 1);

    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k-1) % n + 1;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,cases;
    C ch;
    sf("%d",&cases);
    getchar();
    for(k=1; k<=cases; k++)
    {
        sf("%d %d",&i,&j);
        pf("Case %d: %d\n",k,josephus(i,j));
    }
    return 0;
}











