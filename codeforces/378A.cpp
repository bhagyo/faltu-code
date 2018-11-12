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

char str[sz];
int main()
{
    bool key;
    C ch1,ch2;
    int i,j,k,m,n;
    //TEST // "test" as variable
    scs(str);
    int ln=strlen(str);
    str[ln]='A';
    str[ln+1]='\0';
    int res=-1;
    int loc=0;
    for(i=0;str[i];i++)
        if(str[i]=='A' or  str[i]=='E' or  str[i]=='I' or  str[i]=='O' or  str[i]=='U' or str[i]=='Y')
        {
            loc=i;
            break;
        }
    res=max(res,loc+1);
    for(j=i+1;str[j];j++)
        if(str[j]=='A' or  str[j]=='E' or  str[j]=='I' or  str[j]=='O' or  str[j]=='U' or str[j]=='Y')
        {
            res=max(res,j-loc);
            loc=j;
        }
    pfi(res);
    return 0;
}

/*
input:

output:

*/
