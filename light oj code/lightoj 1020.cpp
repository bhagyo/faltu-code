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
#define sz 7
#define sz1 10000

/******   start your code   *******/

C name[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,cases,loop;
    C ch;
    sf("%d",&cases);
    getchar();
    for(k=1; k<=cases; k++)
    {
        sf("%d %s",&loop,name);
        getchar();
        if(loop&1)
        {
            if(name[0]=='A')
                pf("Case %d: Bob\n",k);
            else
                pf("Case %d: Alice\n",k);
        }
        else
        {
            if(name[0]=='A')
                pf("Case %d: Alice\n",k);
            else
                pf("Case %d: Bob\n",k);
        }
    }
    return 0;
}

