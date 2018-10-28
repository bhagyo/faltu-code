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
#define sz 1005

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res;
    int ln1,ln2;
    C str1[sz],str2[sz];
    bool ck;
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        res=0;
        ck=false;
        sf("%s %s",str1,str2);
        getchar();
        ln1=strlen(str1);
        ln2=strlen(str2);
        if(ln2>ln1)
        {
            pf("nao encaixa\n");
            continue;
        }
        for(i=ln1-1,j=ln2-1;i>=0,j>=0;i--,j--)
            if(str1[i]!=str2[j])
            {
                ck=true;
            }
        //pf("res = %d\n",res);
        if(ck)
            pf("nao encaixa\n");
        else
            pf("encaixa\n");
    }

    return 0;
}













