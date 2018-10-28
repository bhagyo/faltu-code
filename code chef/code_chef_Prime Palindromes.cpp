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
#define sz 1000000
#define sz1 114

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    long int pri[]= {2,3,5,7,11,101,131,151,181,191,313,353,373,383,727,757,787,
                797,919,929,10301,10501,10601,11311,11411,12421,12721,12821,
                13331,13831,13931,14341,14741,15451,15551,16061,16361,16561,
                16661,17471,17971,18181,18481,19391,19891,19991,30103,30203,
                30403,30703,30803,31013,31513,32323,32423,33533,34543,34843,
                35053,35153,35353,35753,36263,36563,37273,37573,38083,38183,
                38783,39293,70207,70507,70607,71317,71917,72227,72727,73037,
                73237,73637,74047,74747,75557,76367,76667,77377,77477,77977,
                78487,78787,78887,79397,79697,79997,90709,91019,93139,93239,
                93739,94049,94349,94649,94849,94949,95959,96269,96469,96769,
                97379,97579,97879,98389,98689,1003001
               };
    long int i,num1;
    sf("%ld",&num1);
    for(i=0; i<120; i++)
        if(pri[i]>=num1)
        {
            pf("%ld\n",pri[i]);
            break;
        }
    return 0;
}






