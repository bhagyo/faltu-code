/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি  রাগ,নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef unsigned long long int llu;

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
#define sz 1000005
#define sz1 10

/******   start your code   *******/

bool pos(int i)
{
    int base=2;
    for(;base<=100;)
    {
        if(base==i) return false;
        base*=2;
    }
    return true;
}
int main()
{
    int arr[101];
    int i,j,n;
    int jor,bijor,len,bar;
    sci(n);
    for(i=0; i<n; i++) sci(arr[i]);
    if(arr[0]&1==0 or arr[n-1]&1==0)
    {
        pfs("No\n");
    }
    else if(n==2)
    {
        if(arr[0]&1==0 or arr[1]&1==0) pfs("No");
    }
    else
    {
        bar=jor=0;bijor=0,len=0;
        for(i=0;i<n;i++)
            if(arr[i]&1==0) jor++;
            else
            {
                bijor++;
                if(bijor>=2 and jor>0)
                {
                    if(jor&1==0) len++;
                    bijor-=2,jor=0;
                    if(len>0 and bijor>0)
                        len=0;
                    else
                    {
                        pfs("No");
                        return 0;
                    }
                    bar++;
                }
            }
        if(bar==0)
        {
            if(bijor%2==1)      pfs("Yes");
            else if(pos(bijor)) pfs("Yes");
            else                pfs("No");
        }
        else
        {

        }
    }
    return 0;
}

/*
input:

output:

*/
