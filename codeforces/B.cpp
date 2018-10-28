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


char arr[][10]= {"FRIDAY","SATURDAY","SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY"};
char day[10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,k,tc,res,ans,temp,num1,num2,num3,num;
    lld now,then;
    sf("%lld",&tc);
    for(j=1; j<=tc; j++)
    {
        sf("%lld%lld%s",&now,&then,day);
        pf("Case %lld: ",j);
        if(then>=now)
        {
            temp=then-now;
            temp=temp%7;
            if(temp==0) pfs(day);
            else
            {
                rep(k,0,7)
                if(strcmp(day,arr[k])==0) break;
                res=k;
                while(temp--)
                {
                    if(k==6) k=0;
                    else k++;
                }
                pfs(arr[k]);
            }
        }
        else
        {
            temp=now-then;
            temp=temp%7;
            if(temp==0) pfs(day);
            else
            {
                rep(k,0,7)
                if(strcmp(day,arr[k])==0) break;
                res=k;
                while(temp--)
                {
                    if(k==0) k=6;
                    else k--;
                }
                pfs(arr[k]);
            }

        }
    }
    return 0;
}

/*
input:
2
10 20 FRIDAY
10 21 SUNDAY

output:

*/
