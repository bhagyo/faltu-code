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
#define sz 100

/******   start your code   *******/

C fast[sz],last[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,total,mx,num1,num2;
    sf("%d",&tc);
    getchar();
    bool ck;
    /*FOR(k,0,tc)*/while(tc--)
    {
        ck=true;
        gets(fast);gets(last);
        for(i=0;fast[i];i++)
        {
            if(fast[i]=='?' || last[i]=='?')
                continue;
            else if(fast[i]!=last[i])
            {
                ck=false;
                break;
            }
        }
        if(ck) pf("Yes\n");
        else pf("No\n");
    }
    return 0;
}






