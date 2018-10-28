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
#define sz1 100005
#define sz 1005

/******   start your code   *******/

char str[sz1];
stack<char>st;
vector<char>v;
bool cheak(int x,int l)
{
    bool flag=0;
    int i;
    for(i=x+1; i<l; i++)
        if(v[i]!='0')
        {
            flag=1;
            break;
        }
    return flag;
}
int main()
{
    int  i,j,n,k,h,x,ans,a,b,r,val,y,m,l,mx,z;
    char ch,ch1;
    bool key=1,flag=1;
    scs(str);
    l=strlen(str);
    i=l-1;
    ch='.';
    ch1='0';
    while(str[i]!='e')
    {
        st.push(str[i]);
        i--;
    }
    a=0;
    while(!st.empty())
    {
        a=a*10+(st.top()-'0');
        st.pop();
    }
    b=0;
    for(i=0; str[i]!='e'; i++)
    {
        if(str[i]=='.')
            key=0;
        else if(key && str[i]) v.pb(str[i]);
        else if(!key)
        {
            if(a==b)
                v.pb(ch);
            b++;
            v.pb(str[i]);
        }
    }
    while(b<a)
    {
        v.pb(ch1);
        b++;
    }
    l=v.size();
    key=1;

    for(i=0; i<l; i++)
    {
       // pf("v=%c\n",v[i]);
        if(key && v[i]=='0') continue;
        else if(v[i]=='.')
        {
            if(key)
                pf("0");
            key=0;
            flag=cheak(i,l);
            if(flag) pf(".");
            else return 0;
        }
        else
        {
            key=0;
            pf("%c",v[i]);
        }
    }
    return 0;
}

/*
input:

output:

*/
