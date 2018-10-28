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
#define sz 20000010

/******   start your code   *******/


ld N=sz;
ld twin_store[sz];
bool status[sz];
void seive()
{
    int i,j,k,sqrtN;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    sqrtN=sqrt(N);
    for(i=3; i<=sqrtN; i+=2)
        if(status[i]==0)
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
}
void twin_prime()
{
    ld j=1;
    int i;
    for(i=1;i<20000000;i++)
        if(!(status[i]) && !(status[i+2]))
            twin_store[j++]=i;

}
int main()
{
    //freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    seive();
    twin_prime();
    ld num;
    ld i;
    for(i=1;i<=100000;i++)
    {
        pf("(%ld, %ld)\n",twin_store[i],twin_store[i]+2);
    }

    return 0;
}


