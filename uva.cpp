#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stack>
#include<queue>
#include<map>
#include<string.h>
#include<vector>
#include<bitset>
#include<algorithm>

using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define sz 1000002
#define sz1 103
#define sz2 1003

/******   start your code   *******/
vector<int>v;
int main()
{
    int i,j,k,T,x,n,N,ln,y,m,mx,a,b,r;
    bool key;
    while(sf("%d%d",&x,&y)!=EOF)
    {
       sf("%d",&N);
       y=0;
       key=true;
       for(i=0;i<N;i++)
       {
           sf("%d%d%d",&a,&b,&r);
           y=((x-a)*(x-a))+((y-b)*(y-b))-(r*r);
           v.push_back(y);
       }
       for(i=0;i<N;i++)
       {
           if(v[i]<=0){key=false; break;}
       }
       if(key)
        pf("SAFE\n");
    else
        pf("DEAD\n");
    }
    return 0;
}
