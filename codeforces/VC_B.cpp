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
#define sz 205
#define sz1 4

/******   start your code   *******/

char clor[sz];
int arr[sz1];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,k,tc,res,ans,temp,num1,num2,num3,num;
    //rep(i,0,tc)
    //while(1)
    {
        sci(num);
        scs(clor);
        rep(i,0,num)
        {
            if(clor[i]=='B') arr[0]++;
            else if(clor[i]=='G') arr[1]++;
            else arr[2]++;
        }
        if(arr[0]==0 && arr[1]==0) pf("R\n");
        else if(arr[1]==0 && arr[2]==0) pf("B\n");
        else if(arr[0]==0 && arr[2]==0) pf("G\n");
        else if(num==2)
        {
            if(arr[0]+arr[2]==2) pf("G\n");
            else if(arr[0]+arr[1]==2) pf("R\n");
            else pf("B\n");
        }
        else if(num==3)
        {
            if(arr[0]==1 && arr[1]==1 && arr[2]==1) pf("BGR\n");
            else if(arr[0]==0 && arr[1]==1) pf("BG\n");
            else if(arr[1]==0 && arr[2]==1) pf("GR\n");
            else pf("BR\n");
        }
        else if(num>3)
        {
            if(arr[0]==0 && arr[1]<arr[2]) pf("BG\n");
            else if(arr[0]==0 && arr[2]<arr[1]) pf("BR\n");
            else if(arr[1]==0 && arr[0]<arr[2]) pf("GR\n");
            else pf("BGR\n");
        }
    }
    return 0;
}

/*
input:

output:

*/
