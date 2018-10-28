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
    int i,cases,count=0;
    ///for finding the number
    /*while(sf("%d",&cases)==1)
    {
        if(status[cases]==0)
            pf("%d eh primo\n",cases);
        else
            pf("%d nao eh primo\n",cases);
    }*/
    ///for finding total number
    count=0;
    for(i=0; i<=100; i++)
    {
        if(status[i]==0)
            //pf("%d,",i);
            count++;
    }
    pf("%d",count);
    return 0;
}


