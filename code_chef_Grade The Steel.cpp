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
#define sz 50

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,total,mx,num1,num2;
    bool hrd,car,ten;
    int hard,tensile;
    f carbon;
    sf("%d",&tc);
    getchar();
    while(tc--)
    {
        sf("%d %f %d",&hard,&carbon,&tensile);
        if(hard>50) hrd=true;
        else hrd=false;
        if(carbon<0.70) car=true;
        else car=false;
        if(tensile>5600) ten=true;
        else ten=false;
        if(hrd && car && ten) pf("10\n");
        else if(hrd && car && !ten) pf("9\n");
        else if(!hrd && car && ten) pf("8\n");
        else if(hrd && !car && ten) pf("7\n");
        else if(hrd || car || ten) pf("6\n");
        else  pf("5\n");
    }
    return 0;
}
