#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<algorithm>
#include<set>
#include<limits.h>

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
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfd(x) scanf("%lf",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)
#define pb(x) push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define mem(x,y) memset(x,y,sizeof(x))
#define TEST int cs,T;sfi(T);getchar();for(cs=1;cs<=T;cs++)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1 printf("hi......1\n")
#define chk2 printf("hi......2\n")




#define mod 1000003
#define eps 10e-8
#define sz 105
#define sz1 5
#define sz2 300009
/******* start my code ********/

char str[sz];
bool arr[sz1];
int main()
{
    int i,j,k,x,l,n,mn,t,mx,m,sum,u,e,p,num,a,b,w,z,y;
    char ch,ch1;
    bool key=1,flag=1;


    // LLD res,ans;
    // freopen("iA-small-attempt4.in","r",stdin);
    // freopen("A-small-attempt4.ot","w",stdout);
    x=1;

    while(gets(str))
    {
        key=1;
        flag=1;
        m=0;
        for(i=0; str[i]; i++)
        {
            if(str[i]=='.'){m++;if(m>1){flag=0;break;} continue;}
            if(m && str[i]==' ') {flag=0; break;}
            if(str[i]>'1')
                arr[0]=1;
            if(str[i]>'7')
                arr[1]=1;
            if(str[i]>'9')
                arr[2]=1;
            if((str[i]>'f' && str[i]<='z') || ((str[i]>'F' && str[i]<='Z') ) )
            {
                flag=0;
                break;
            }
        }
        l=strlen(str);
        if((l==1 && str[0]=='.') || str[l-1]=='.') flag=0;
        pf("Case %d:",x);
        if(!flag) {pf(" habijabi number\n");}
        else
        {
        if(!arr[0])
        {
            pf(" binary");
            key=0;
        }
        if(!arr[1])
        {
            if(!key) pf(",");
            pf(" octal");
            key=0;
        }
        if(!arr[2])
        {
            if(!key) pf(",");
            pf(" decimal");
            key=0;
        }
        if(!key) pf(" &");
        pf(" hexadecimal\n");
        }
        mem(arr,0);
        x++;
    }
    return 0;
}


/*
10110
1234
1abcdef2.ABCDEF09
.
*/
