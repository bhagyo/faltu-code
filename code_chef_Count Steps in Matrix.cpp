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
#define sz 250005

/******   start your code   *******/

int absl(int a)
{
    if(a>-1)
        return a;
    else
        return -a;
}
class m_p
{
public:
    int x,y;
};

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    m_p mat[sz];
    int i,j,k,tc,res,total,mx,num,num1,num2,temp,store;
    sf("%d",&tc);
    getchar();
    while(tc--)
    {
        sf("%d",&num);
        res=0;
        for(i=1;i<=num;i++)
            for(j=1;j<=num;j++)
            {
                sf("%d",&temp);
                mat[temp].x=i;
                mat[temp].y=j;
            }
        num*=num;
        for(i=2;i<=num;i++)
            res=res+absl(mat[i].x-mat[i-1].x)+absl(mat[i].y-mat[i-1].y);
        pf("%d\n",res);
    }
    return 0;
}







