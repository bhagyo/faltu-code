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
#define sz 102

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,store;
    C ch;
    C num[sz];
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        store=0;
        gets(num);
        for(i=0;num[i];i++)
        {
            if(num[i]=='1') store+=2;
            else if(num[i]=='2') store+=5;
            else if(num[i]=='3') store+=5;
            else if(num[i]=='4') store+=4;
            else if(num[i]=='5') store+=5;
            else if(num[i]=='6') store+=6;
            else if(num[i]=='7') store+=3;
            else if(num[i]=='8') store+=7;
            else if(num[i]=='9') store+=6;
            else store+=6;
        }
        pf("%d leds\n",store);
    }
    return 0;
}






