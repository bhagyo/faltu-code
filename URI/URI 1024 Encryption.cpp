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
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

/******   start your code   *******/

#define sz 1002

C str[sz];
void rev_string(char str[],int n)
{
    char temp;
    int i=0,j=n;
    while(i<j/2)
    {
        temp=str[i];
        str[i]=str[j-i-1];
        str[j-i-1]=temp;
        i++;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i,j,k,tc,res,store;
    C ch;
    sf("%d",&tc);
    getchar();
    FOR(k,0,tc)
    {
        gets(str);
        res=strlen(str);
        rev_string(str,res);
        res/=2;
        for(i=0;i<res;i++)
        {
            store=toascii(str[i]);
            if((store>=65 && store<=90) || (store>=97 && store<=122))
                store+=3;
            pf("%c",store);
        }
        for(i=res;str[i];i++)
        {
            store=toascii(str[i]);
            if((store>=65 && store<=90) || (store>=97 && store<=122))
                store+=2;
            pf("%c",store);
        }
        nn;
    }

    return 0;
}







