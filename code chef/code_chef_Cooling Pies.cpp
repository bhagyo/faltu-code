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
#define sz 31

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int pie[sz],rack[sz];
    int i,j,k,tc,res,total;
    C ch;
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        sf("%d",&total);
        for(i=0;i<total;i++) sf("%d",&pie[i]);
        for(i=0;i<total;i++) sf("%d",&rack[i]);
        sort(pie,pie+total);
        sort(rack,rack+total);

        //for(i=0;i<total;i++) pf("%d   ",pie[i]);nn;
        //for(i=0;i<total;i++) pf("%d   ",rack[i]);nn;


        res=j=0;
        for(i=0;i<total;i++)
            if(pie[j]<=rack[i])
                j++,res++;
        pf("res = %d\n",res);

    }

    return 0;
}













