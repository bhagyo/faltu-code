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
#define sz 9

/******   start your code   *******/

C arr[sz];
C arr1[sz];
C arr2[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    C ch1,ch2,ch;
    bool key;
    int i,j,k,tc,res,total,temp,mx,num,num1,num2;
    //sci(tc);rep(k,0,tc)
    //while(1)
    {
        scs(arr);
        if(arr[0]!='-')
            pfs(arr);
        else
        {
            temp=strlen(arr);
            strncpy(arr1,arr,temp-1);//omitting last digit from array;
            num1=atoi(arr1);//last digit omitted
            ch1=arr[temp-1];
            arr[temp-2]=ch1;//omitting last sec digit
            arr[temp-1]='\0';
            strcpy(arr2,arr);
            num2=atoi(arr1);//lasr digit omitted
            if(num1>num2)
                pfs(arr2);
            else pfs(arr1);
        }
    }
    return 0;
}

















