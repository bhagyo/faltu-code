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
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 5
#define sz 100005

/******   start your code   *******/

char str[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,x,y,z,m,a,b,k,tc,cnt,len;
    //TEST // "test" as variable
    //while(1)
    sci(n);
    scs(str);
    cnt=0,len=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='(')
            for(j=i,key=true;j<n and i<n;j++,i++)
            {
                //chk2;
                if(isalpha(str[j]) and key)
                {
                    //chk1;
                    cnt++;
                    key=false;
                }
                else if(str[j]=='_'){key=true;continue;}

                else if(str[j]==')') {i=j; break;}
            }
        else
            for(j=i,tc=0;j<n and i<n;j++)
            {
                if(isalpha(str[j]) and str[j]!='(' and str[j]!=')' and str[j]!='_')
                {
                    tc++;
                    //pf("%c ",str[j]);
                }
                if(str[j]=='_')
                {
                    //nn;
                    len=max(len,tc);
                    //pfi(tc);
                    tc=0;
                }
                if(str[j]=='(')
                {
                    //nn;
                    len=max(len,tc);
                    //pfi(tc);
                    tc=0;
                    i=--j;break;
                }
            }
    }
    len=max(tc,len);
    pfi2(len,cnt);
    return 0;
}

/*
input:


output:

*/
