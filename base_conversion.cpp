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
#define sz1 200
#define sz 100005

/******   start your code   *******/

char s[sz1];
void base_convt(int,int);
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,total,num1,num2,store,num,base1,base2;
    TEST // "test" as variable
    //while(1)
    {
        scs(s);
        sci2(base1,base2);
        base_convt(base1,base2);
    }
    return 0;
}
void base_convt(int b1,int b2)
{
    int cnt=0,r,digit,i,n=0,b=1;
    for(i=strlen(s)-1; i>=0; i--)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            digit=s[i]-'0'-7;
        }
        else
        {
            digit=s[i]-'0';
        }
        n=digit*b+n;
        b=b*b1;
    }
    while(n!=0)
    {
        r=n%b2;
        digit='0'+r;
        if(digit>'9')
        {
            digit+=7;
        }
        s[cnt]=digit;
        cnt++;
        n=n/b2;
    }
    for(i=cnt-1; i>=0; i--)
        printf("%c",s[i]);
    nn;
}
