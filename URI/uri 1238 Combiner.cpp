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
#define sz 52

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res;
    C str1[sz],str2[sz];
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        sf("%s %s",str1,str2);
        getchar();
        int len1=strlen(str1);
        int len2=strlen(str2);
        res=max(len1,len2);
        for(i=0;i<res;i++)
        {
            if(i<len1) pf("%c",str1[i]);

            if(i<len2) pf("%c",str2[i]);
        }
        nn;
    }

    return 0;
}













