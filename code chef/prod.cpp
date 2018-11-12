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

#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

#define pfl(x) printf("%lld\n",x)
#define pfl2(x,y) printf("%lld %lld\n",x,y)
#define pfl3(x,y,z) printf("%lld %lld %lld\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 20
#define sz 100005

/******   start your code   *******/

const int arr[]={8,0,2,4,6};
int arr1[sz1];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,m,a,b,k,tc,cnt,res,temp,total,num1,num2,store,num;
    TEST // "test" as variable
    //while(1)
    {
        k=0;
        cnt=5;
        sf("%lld",&num);
        arr1[k++]=arr[num%5];
        while(num>=cnt)
        {
            if(num==cnt) break;
            temp=num/cnt;
            if(temp*cnt!=num)
                temp+=1;
            arr1[k++]=arr[temp%5];
            cnt*=5;
        }
        for(i=k-1; i>=0; i--)
        {
            /*chk1;
            if(i==k-1 && arr1[k-1]==0)
            {
                chk2;
                pf("arr = %d %d\n",arr[k-1],k-1);
                continue;
            }*/
            pf("%d",arr1[i]);
        }
        nn;
    }
    return 0;
}

/*
input:
1000000000000

output:

*/
