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
#define sz 1000000

/******   start your code   *******/

int N=sz;
int dig_prime[sz];
bool status[sz];
void seive()
{
    int i,j,k,sqrtN,total,res,temp;
    status[0]=1;
    status[1]=1;
    for(i=4; i<=N; i+=2)
        status[i]=1;
    sqrtN=sqrt(N);
    for(i=3; i<=sqrtN; i+=2)
        if(status[i]==0)
            for(j=i+i; j<=N; j+=i)
                status[j]=1;
    total=1;
    dig_prime[0]=dig_prime[1]=0;
    dig_prime[2]=total;
    for(i=3;i<=sz;i++)
    {
        if(status[i]==0)
        {
            temp=i;
            res=0;
            while(temp)
            {
                res=res+(temp%10);
                temp/=10;
            }
            if(status[res]==0) total++;
        }
        dig_prime[i]=total;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    seive();
    int i,j,k,tc,res;
    int strt,fin;
    C ch;
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        sf("%d %d",&strt,&fin);
        pf("%d\n",dig_prime[fin]-dig_prime[strt-1]);
    }
    return 0;
}














