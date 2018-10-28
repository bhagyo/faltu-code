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
#define sz 1000

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,total,mx,num1,num2;
    int arr[sz],seq[sz];
    sf("%d",&tc);
    bool ck;
    getchar();
    /*FOR(k,0,tc)*/while(tc--)
    {
        ck=true;
        sf("%d",&num1);
        for(i=0; i<num1; i++)
            sf("%d",&arr[i]);
        sf("%d",&num2);
        for(i=0; i<num2; i++)
            sf("%d",&seq[i]);
        res=0;
        k=0;
        for(i=0; i<num1; i++)
        {
            if(arr[i]==seq[k]) k++;
            if(k==num2)
            {
                ck=false;
                pf("Yes\n");
                break;
            }
        }
        if(ck) pf("No\n");
    }
    return 0;
}




