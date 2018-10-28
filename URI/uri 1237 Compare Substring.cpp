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

    int i,j,k,tc,res,len;
    C ch;
    C str1[sz],str2[sz];
    gets(str1);
    while(gets(str2))
    {
        res=0;
        for(i=0; str1[i]; i++)
        {
            for(j=0; str2[j]; j++)
                if(str1[i]==str2[j])
                {
                    len=0;
                    for(k=0; str1[k+i],str2[k+j]; k++)
                    {
                        if(str1[k+i]!=str2[k+j]) break;
                        len++;
                    }
                    if(len>res)
                        res=len;
                }
        }
        pf("%d\n",res);
        gets(str1);
    }

    return 0;
}













