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
#define sz 10000

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int prime[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,
                  59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,
                  139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,
                  227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,
                  311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,
                  401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,
                  491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,
                  599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,
                  683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,
                  797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,
                  887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,
                  1009,1013,1019
                 };
    int i,j,k,tc,res,num;
    C ch;
    bool ck;
    while(sf("%d",&num)==1 && num!=0)
    {
        res=num;
        tc=0;
        ck=true;
        for(i=0; i<171; i++)
            if(num%prime[i]==0)
            {
                ck=false;
                while(!(num%prime[i]))
                    num/=prime[i];
                tc++;
                if(num<2) break;
            }
        if(num>2) tc++;
        if(ck) pf("%d : 1\n",res);
        else pf("%d : %d\n",res,tc);
    }

    return 0;
}
