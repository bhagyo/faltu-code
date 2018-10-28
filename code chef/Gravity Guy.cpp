#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<vector>
/*#include<stack>
#include<map>
#include<utility>
#include<algorithm>*/

using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define sz 1000002

/******   start your code   *******/

class runner
{
public:
    int res;
    bool key;
};
char L1[sz];
char L2[sz];
int main()
{
    int T,i,j,result;
    runner a,b;
    bool flag;
    sf("%d",&T);
    getchar();
    while(T--)
    {
       gets(L1);
       gets(L2);
       a.res=b.res=0;
       flag=true;
       a.key=true;
       b.key=true;
       for(i=0;L1[i];i++)
       {
           if(a.key==true)
           {
               if(L1[i]=='#')
               {
                   if(L2[i]=='#')
                   {
                       flag=false;
                   }
                   else
                   {
                       a.key=false;
                       a.res++;
                   }
               }
           }
           else
           {
               if(L2[i]=='#')
               {
                   if(L1[i]=='#')
                   {
                       flag=false;
                   }
                   else
                   {
                       a.key=true;
                       a.res++;
                   }
               }
           }
           if(b.key==true)
           {
              if(L2[i]=='#')
               {
                   if(L1[i]=='#')
                   {
                       flag=false;
                   }
                   else
                   {
                       b.key=false;
                       b.res++;
                   }
               }
           }
           else
           {
               if(L1[i]=='#')
               {
                   if(L2[i]=='#')
                   {
                       flag=false;
                   }
                   else
                   {
                       b.key=true;
                       b.res++;
                   }
               }
           }
           if(flag==false)break;
       }
       if(flag==true)
       {
           if(a.res<=b.res)result=a.res;
           else
            result=b.res;
           pf("Yes\n%d\n",result);
       }
       else
        pf("No\n");
    }
    return 0;
}
