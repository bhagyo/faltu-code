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
#define sz 60

/******   start your code   *******/

char arr[sz];
char dciml[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,l,j,k,tc,res,ans,temp,num1,num2,num3,num;
    int ru,rd,nc,am;
    tc=1;
    while(sf("%s",arr)!=EOF)
    {
        ru=rd=nc=am=0;
        for(i=0;; i++)
            if(arr[i]=='.') break;
        i++;
        for(j=i,k=0; arr[j]; j++,k++) dciml[k]=arr[j];
        dciml[k]='\0';
        pf("k = %d\n",k);
        for(i=0; i<k-1; i++)
        {
            if(dciml[i+1]=='5')
            {
                if(dciml[i+2]=='0') am++;
                else if(dciml[i+2]!='\0') ru++;
            }
            if(dciml[i]=='0')
            {
                if(dciml[i+1]=='5') am++;
                else
                {
                    temp=dciml[i+1]-48;
                    if(temp<5) nc++;
                    else ru++;
                }
            }
            else
            {
                temp=dciml[i+1]-48;
                if(temp==0) nc++;
                else if(temp<5) rd++;
                else ru++;
            }
        }
        pf("Case 1:\n",tc++);
        pf("ROUND UP: %d\n",ru);
        pf("ROUND DOWN: %d\n",rd);
        pf("NO CHANGE: %d\n",nc);
        pf("AMBIGUOUS: %d\n",am);

    }
    return 0;
}

/*
input:

output:

*/
