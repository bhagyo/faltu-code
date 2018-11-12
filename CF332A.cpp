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

#define pb push_back

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 100

/******   start your code   *******/

int arr[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,tc,cas,res,total,temp,mx,num,num1,num2;
    //while(sf("%lld",&num)!=EOF)
    //rep(cas,1,tc+1)while(tc--)
    //while(1)
    {
        sci3(num1,num2,num);
        arr[0]=num1+num2+num;
        arr[1]=(2*num1)+(2*num2);
        arr[2]=(2*num1)+(2*num);
        arr[3]=(2*num2)+(2*num);
        sort(arr,arr+4);
        pf("%d\n",arr[0]);
    }
    return 0;
}

