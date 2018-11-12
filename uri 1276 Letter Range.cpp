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
#define sz 124
#define sz1 55

/******   start your code   *******/

int tak[sz];
C str[sz1];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,total,mx,num1,num2;
    bool sp,pr;
    while(gets(str))
    {
        pr=true;
        sp=false;
        for(i=0; str[i]; i++)
            tak[str[i]]=1;
        for(i=97; i<123; i++)
        {
            if(tak[i]==1 && pr)
            {
                if(sp)
                {
                    pf(", ");
                    sp=true;
                }
                pf("%c:",i);
                pr=false;
            }
            if(tak[i+1]==0 && tak[i]==1)
            {
                pf("%c",i);
                pr=true;
                sp=true;
            }
            tak[i]=0;
        }
        nn;
    }

    return 0;
}






