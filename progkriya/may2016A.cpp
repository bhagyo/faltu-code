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
#define sz 10

/******   start your code   *******/


char str1[sz],str2[sz];

int arr1[sz];
int arr2[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool same,key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,ans,total,temp,num1,num2,num3,num;
    //TEST // "test" as variable
    while(sf("%s %s",str1,str2)==2)
    {
        j=temp=0;

        for(i=0;str1[i];i++)
        {
            if(str1[i]!='.')
                temp=(temp*10)+(str1[i]-'0');
            else
            {
                arr1[j++]=temp;
                temp=0;
            }
        }
        arr1[j]=temp;

        j=temp=0;
        for(i=0;str2[i];i++)
        {
            if(str2[i]!='.')
                temp=(temp*10)+(str2[i]-'0');
            else
            {
                arr2[j++]=temp;
                temp=0;
            }
        }
        arr2[j]=temp;

        //rep(i,0,3) pf("%d ",arr1[i]);
        //rep(i,0,3) pf("%d ",arr2[i]);

        //nn;

        key=false;
        same=true;
        for(i=0;i<3;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                if(arr1[i]>arr2[i])
                {
                    //chk1;
                    key=true;
                    pfs(str1);
                }
                else
                {
                    //chk2;
                    //pf("%d %d\n",arr1[i],arr2[i]);
                    key=true;
                    pfs(str2);
                }
            }
            else
                cnt++;
            if(key) break;
        }

        if(!key && cnt==3)
        {
            if(strlen(str1)>strlen(str2))
                pfs(str1);
            else pfs(str2);
        }
        cnt=0;
        rep(i,0,5)
            arr1[i]=arr2[i]=0;

    }
    return 0;
}

/*
input:
10.10.5 10.7.3

output:

*/
