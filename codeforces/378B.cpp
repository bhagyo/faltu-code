/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি রাগ, নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
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

typedef long long int lld;
typedef double lf;
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
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back


/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 2005
#define sz1 100005

/******   start your code   *******/


int ar1[sz1];
int ar2[sz1];
int ar3[sz1];
int main()
{
    bool key;
    C ch1,ch2;
    int i,j,k,m,n,l,r;
    int nlf,nrg;
    int lft,rgt;
    lft=rgt=0;
    int vlft,vrgt;
    vlft=vrgt=0;
    int dif=0;
    //TEST // "test" as variable
    sci(n);
    for(i=1; i<=n; i++)
    {
        sci2(ar1[i],ar2[i]);
        if(ar1[i]>ar2[i])
            lft++;
        else rgt++;
        vlft+=ar1[i];
        vrgt+=ar2[i];
    }
    dif=(int)abs(vlft-vrgt);
    int res=0;
    for(i=1;i<=n;i++)
    {
        nlf=vlft-ar1[i]+ar2[i];
        nrg=vrgt+ar1[i]-ar2[i];
        if((int)(abs(nlf-nrg))>dif)
        {
            res=i;
            dif=(int)(abs(nlf-nrg));
        }
    }
    pfi(res);
    return 0;
}

/*
input:

output:

*/
