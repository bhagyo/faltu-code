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
#define sz 105

/******   start your code   *******/

char arr[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool bin,oct,dec,hex,habi,sp;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,res,ans,temp,num1,num2,num3,num;
    //TEST // "test" as variable
    //while(1)
    {
        tc=0;
        while(scanf("%s",arr)!=EOF)
        {
            tc++;
            bin=true;
            habi=oct=dec=false;
            hex=false;
            for(i=0; arr[i]; i++)
            {
                if(arr[i]=='.') continue;

                if(isalpha(arr[i])){
                    ch1=tolower(arr[i]);
                    //pf("%c \n",ch1);
                }
                if(ch1=='a'||ch1=='b'||ch1=='c'||ch1=='d'||ch1=='e'||ch1=='f'){
                    hex=true;
                    //chk1;
                }
                if(arr[i]!='0' && arr[i]!='1')
                {
                    bin=false;
                }
                if(arr[i]=='8'||arr[i]=='9')
                    dec=true,oct=false;

                if(arr[i]=='2'||arr[i]=='3'||arr[i]=='4'||arr[i]=='5'||arr[i]=='6'||arr[i]=='7')
                    oct=true;

                if( !(arr[i]>='0' && arr[i]<='9'))
                    if(ch1!='a'&&ch1!='b'&&ch1!='c'&&ch1!='d'&&ch1!='e'&&ch1!='f')
                    {
                        habi=true;
                        //pf("this   %c  %c\n",arr[i],ch1);
                    }
            }
            if(dec) oct=false;
            if(bin) oct=dec=true;
            sp=false;
            pf("Case %d: ",tc);
            if(strlen(arr)==1 && arr[0]=='.')
            {
                pf("habijabi number\n");
                continue;
            }
            if(habi==true)
            {
                pf("habijabi number\n");
                continue;
            }
            if(bin==true && !hex)
                pf("binary, octal, decimal & hexadecimal");
            else if(oct && !hex)
                pf("octal, decimal & hexadecimal");
            else if(dec && !hex)
                pf("decimal & hexadecimal");
            else pf("hexadecimal");
            nn;
        }

    }
    return 0;
}

/*
input:

output:

*/
