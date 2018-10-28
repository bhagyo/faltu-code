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
#define sz1 80077

/******   start your code   *******/

int N=sz;
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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    seive();
    int tc;
    lld j,i,num1,num2;
    lld alm_pri[sz1];
    int top=0,cont=0;
    for(i=2;i<=1000000;i++)
        if(!status[i])
            for(j=i*i;j<=1000000000000;j*=i)
            alm_pri[top++]=j;
    sf("%d",&tc);
    getchar();
    while(tc--)
    {
        cont=0;
        sf("%lld %lld",&num1,&num2);
        for(i=0;i<80070;i++)
            if(alm_pri[i]>=num1 && alm_pri[i]<=num2)
                cont++;
        pf("%d\n",cont);
    }
    return 0;
}






