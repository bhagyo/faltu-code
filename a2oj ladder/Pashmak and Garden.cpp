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
#define sz 1000005

/******   start your code   *******/


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    C ch1,ch2,ch;bool key;
    int x1,x2,y1,y2,x3,y3,x4,y4;
    int i,j,k,tc,res,total,temp,mx,num,num1,num2;
    //sci(tc);rep(k,0,tc)
    //while(1)
    {
        key=true;
        sci3(x1,y1,x2);sci(y2);
        //pf("%d %d %d %d\n",x1,y1,x2,y2);
        if(x1==x2)
        {
            temp=abs(y1-y2);
            x4=x1+temp;y4=y1;
            x3=x2+temp;y3=y2;
        }
        else if(y1==y2)
        {
            temp=abs(x1-x2);
            x4=x1;y4=y1+temp;
            x3=x2;y3=y2+temp;
        }
        else if(abs(x1-x2)==abs(y1-y2))
        {
            x4=x1;y4=y2;
            x3=x2;y3=y1;
        }
        else key=false;
        if(key)
        pf("%d %d %d %d\n",x3,y3,x4,y4);
        else pfi(-1);
    }
    return 0;
}







