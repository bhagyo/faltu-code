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
#define sz1 95

/******   start your code   *******/

using namespace std;
lld fibo[sz1];
lld sum[sz1];

void fibof()
{
    fibo[1]=1;
    fibo[2]=1;
    int i;
    sum[1]=1;
    sum[2]=2;
    for(i=3; i<95; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        sum[i]=sum[i-1]+fibo[i];
    }
}
int main()
{
    fibof();
    int j,Tc;
    lld num;
    scanf("%d",&Tc);
    while(Tc--)
    {
        scanf("%lld",&num);
        for(j=1; j<102; j++)
        {
            if(sum[j]>=num)
                break;
        }
        printf("%d\n",j);
    }
    return 0;
}
