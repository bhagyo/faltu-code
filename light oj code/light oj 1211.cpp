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

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    lld i,j,k,cases,loop;
    lld maxx1,maxy1,maxz1,minx2,miny2,minz2;
    lld x1,y1,z1,x2,y2,z2;
    C ch;
    sf("%lld",&cases);
    getchar();
    for(k=1; k<=cases; k++)
    {
        sf("%lld",&loop);
        sf("%lld %lld %lld",&x1,&y1,&z1);
        sf("%lld %lld %lld",&x2,&y2,&z2);
        maxx1=x1,maxy1=y1,maxz1=z1;
        minx2=x2,miny2=y2,minz2=z2;
        //pf("res = minx2=%lld,miny2=%lld,minz2=%lld\n",minx2,miny2,minz2);
        loop--;
        while(loop--)
        {
            sf("%lld %lld %lld",&x1,&y1,&z1);
            sf("%lld %lld %lld",&x2,&y2,&z2);
            maxx1=max(x1,maxx1);
            maxy1=max(y1,maxy1);
            maxz1=max(z1,maxz1);
            minx2=min(x2,minx2);
            miny2=min(y2,miny2);
            minz2=min(z2,minz2);
        }
        pf("maxx1=%lld,maxy1=%lld,maxz1=%lld\n",maxx1,maxy1,maxz1);
        pf("minx2=%lld,miny2=%lld,minz2=%lld\n",minx2,miny2,minz2);
        pf("Case %lld: %lld\n",k,(maxx1-minx2)*(maxy1-miny2)*(maxz1-minz2));
    }
    return 0;
}














