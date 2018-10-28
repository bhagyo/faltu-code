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
#define sz 10000

/******   start your code   *******/

int blok[sz][sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,cases,total,pos,see;
    C ch;
    sf("%d",&cases);
    getchar();
    for(k=1; k<=cases; k++)
    {
        see=1;
        sf("%d %d",&total,&pos);
        for(i=1; i<=total; i++)
            for(j=1; j<=total; j++,see++)
                blok[i][j]=see;

        see=0;
        for(i=1; i<=total; i++)
        {
            for(j=1; j<=total; j++)
            {
                if(pos==blok[i][j])
                {
                    see=1;
                    break;
                }
            }
            if(see)
                break;
        }

       // pf("val = %d %d\n",i,j);

        see=1;
        if((i-1)>0)
        {
            pf("T-%d",blok[i-1][j]);
            see=0;
        }
        if((i+1)<=total)
        {
            if(see==0)
                pf(" ");
            pf("D-%d",blok[i+1][j]);
            see=0;
        }
        if((j-1)>0)
        {
            if(see==0)
                pf(" ");
            pf("R-%d",blok[i][j-1]);
            see=0;
        }
        if((j+1)<=total)
        {
            if(see==0)
                pf(" ");
            pf("L-%d",blok[i][j+1]);
        }
        nn;
    }
    return 0;
}













