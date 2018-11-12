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
    bool key1,key2,key3;
    C ch1,ch2,ch;
    bool key;
    int i,j,k,tc,res,total,temp,mx,num,num3,num1,num2;
    //sci(tc);rep(k,0,tc)
    //while(1)
    {
        key2=key3=key1=true;
        num1=num2=num3=0;
        sci(num);
        rep(i,0,num)
        {
            sci(temp);
            if(key1)
            {
                num1+=temp;
                key1=false;
            }
            else if(key2)
            {
                num2+=temp;
                key2=false;
            }
            else
            {
                num3+=temp;
                key3=false;
                key1=key2=key3=true;
            }
        }
        //pfi3(num1,num2,num3);
        if(num1>num2 && num1>num3)
            pf("chest");
        else if(num2>num1 && num2>num3)
            pf("biceps");
        else pf("back");
    }
    return 0;
}















