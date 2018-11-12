/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি রাগ, নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define rg register
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

#define mp make_pair

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

int arr[sz];

void ini(int n)
{
    for(int i=0;i<n;i++) arr[i]=i;
}

bool fin(int a,int b)
{
    if(arr[a]==arr[b]) return true;
    else return false;
}

void uni(int a,int b)
{
    int temp=arr[a];
    for(int i=0;i<10;i++)
        if(arr[i]==temp)
            arr[i]=arr[b];
}

int main()
{
    int i,m,n;
    ini(10);
    while(sci2(m,n))
    {
        if(!m and !n) break;
        uni(m,n);
        for(i=0;i<10;i++) pf("%d ",arr[i]);
        nn;
        for(i=0;i<10;i++) pf("%d ",i);
        nn;
    }

    return 0;
}

/*
input:

output:

*/
