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

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int arr[]= {1,3,7,15,31,63,127,255,511,1023,2047,4095,8191,
                16383,32767,65535,131071,262143,524287,1048575,
                2097151,4194303,8388607,16777215,33554431,67108863,
                134217727,268435455,536870911,1073741823
               };
    int i,j,k,tc,res,total,mx,num1,num2;
    bool ck;
    sf("%d",&tc);
    getchar();
    /*FOR(k,0,tc)*/while(tc--)
    {
        ck=true;
        sf("%d",&num1);
        if(num1==1)
        {
            pf("2\n");
            continue;
        }
        for(i=1; i<30; i++)
            if(num1==arr[i])
            {
                pf("%d\n",arr[i-1]);
                ck=false;
                break;
            }
        if(ck) pf("-1\n");
    }
    return 0;
}
