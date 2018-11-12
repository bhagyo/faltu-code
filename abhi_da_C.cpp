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
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

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
#define sz 1005

/******   start your code   *******/

char str1[sz];
char str2[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,ans,total,temp,num1,num2,num3,num;
    //TEST // "test" as variable
    //while(1)
    {
        temp=0;
        scs(str1);
        scs(str2);
        num1=strlen(str1);
        num2=strlen(str2);
        if(num1<8)
        {
            if(!strcmp(str1,str2));
                pf("yes\n");
            else pf("no\n");
        }
        else
        {
            if(num1==num2)
            {
                for(i=0;i<num1;i++)
                    if(str1[i]!=str2[i])
                        temp++;
                if(temp<=1)
                    pf("yes\n");
                else pf("no\n");
            }
            else if(num1==(num2-1))
            {
                for(i=0;i<num2;i++)
                {

                }
            }
            else if((num1-1)==num2)
            {

            }
            else pf("no\n");
        }
    }
    return 0;
}

/*
input:

output:

*/
