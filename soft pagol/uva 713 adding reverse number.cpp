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

int rev(int num)
{
    int store=0;
    while(num)
    {
        store=store*10+(num%10);
        num/=10;
    }
    return store;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,total,mx,num1,num2;
    C ch[sz];
    sf("%d",&tc);
    getchar();
    while(tc--)
    {
        sf("%d %d",&num1,&num2);
        total=rev(num1)+rev(num2);
        pf("%d\n",rev(total));
    }
    return 0;
}






