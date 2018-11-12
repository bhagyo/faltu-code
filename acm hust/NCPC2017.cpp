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

#define mpi make_pair

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

int arr[sz1];
int ar2[sz1];
int main()
{
    bool key;
    C ch1,ch2;
    int i,j,k,m,n;
    //TEST // "test" as variable
    sci(n);
    int idx=0;
    m=INT_MAX;
    for(i=0; i<n; i++)
    {
        sci(arr[i]);
        ar2[i]=arr[i];
        if(m>arr[i])
        {
            m=arr[i];
            idx=i;
        }
    }
    k=idx;
    sort(arr,arr+n);
    key=true;
    for(i=0; i<n; i++)
    {
        if(idx==n) idx=0;

        if(arr[i]!=ar2[idx])
        {
            key=false;
            break;
        }
        else idx++;
    }
    if(!key) pfs("unimpossible");
    else
    {
        pfs("paici");
        pfi(k);
    }
    return 0;
}

/*
input:
7
4 5 6 0 1 2 3

output:

*/
