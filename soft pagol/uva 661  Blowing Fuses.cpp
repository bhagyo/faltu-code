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
#define sz 21

/******   start your code   *******/

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc=1,res,total,mx,now;
    int device[sz];
    int divc,oper,cap;
    bool mode[sz];
    C ch;
    while(sf("%d %d %d",&divc,&oper,&cap)==3)
    {
        if((divc+oper+cap)==0)
            return 0;
        memset(mode,true,sizeof(mode));
        for(i=1;i<=divc;i++)
            sf("%d",&device[i]);
        total=mx=0;
        for(i=1;i<=oper;i++)
        {
            sf("%d",&now);
            if(mode[now])
            {
                mode[now]=false;
                total+=device[now];
                if(total>mx)
                    mx=total;
            }
            else
            {
                mode[now]=true;
                total-=device[now];
            }
        }
        pf("Sequence %d\n",tc++);
        if(cap>=mx){
            pf("Fuse was not blown.\n");
            pf("Maximal power consumption was %d amperes.\n\n",mx);
        }
        else
            pf("Fuse was blown.\n\n");
    }

    return 0;
}



