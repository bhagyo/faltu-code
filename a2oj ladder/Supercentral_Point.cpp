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
#include<climits>

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
#define ff first
#define ss second
#define mp make_pair
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define rep(i,x,cases) for(i=x;i<cases;i++)
#define repin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%ld",&x)
#define scl2(x,y) scanf("%ld %ld",&x,&y)
#define scl3(x,y,z) scanf("%ld %ld %ld",&x,&y,&z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 205

/******   start your code   *******/

pair <int,int> pnt[sz];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    bool ch1,ch2,ch3,ch4;
    int i,j,k,tc,res,total,temp,mx,num,num1,num2;
    //sci(tc);rep(k,0,tc)
    //while(1)
    {
        sci(num);
        res=0;
        rep(i,0,num)
        sci2(pnt[i].ff,pnt[i].ss);

        for(i=0; i<num; i++)
        {
            ch1=ch2=ch3=ch4=false;
            for(j=0; j<num; j++)
            {
                if(i==j) continue;
                if(pnt[i].ff>pnt[j].ff && pnt[i].ss==pnt[j].ss)
                    ch1=true;
                else if(pnt[i].ff<pnt[j].ff && pnt[i].ss==pnt[j].ss)
                    ch2=true;
                else if(pnt[i].ff==pnt[j].ff && pnt[i].ss<pnt[j].ss)
                    ch3=true;
                else if(pnt[i].ff==pnt[j].ff && pnt[i].ss>pnt[j].ss)
                    ch4=true;
            }
            if(ch1&&ch2&&ch3&&ch4)res++;
        }
        pfi(res);
    }
    return 0;
}


/*
8
1 1
4 2
3 1
1 2
0 2
0 1
1 0
1 3
*/












