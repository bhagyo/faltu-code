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

#define itr ::iterator=
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

int main()
{
    int a,b,c,i,n,cnt=0;
    bool key=true;
    int ar[sz];
    sci(n);
    for(i=0; i<n; i++)
        sci(ar[i]);
    sort(ar,ar+n);
    if(n==0)
    {
        if(ar[0]==0) pfi(0);
        else         pfi(1);
        return 0;
    }
    a=ar[0];
    cnt=0;
    if(ar[0]!=0) cnt++;
    for(i=0; i<n; i++)
    {
        if(ar[i]==0) continue;
        if(ar[i]!=ar[i-1] and i!=0)
            cnt++;
    }
    pfi(cnt);
    return 0;
}
/*
input:


output:

*/

