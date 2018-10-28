/****** HAREE KRISHNA   ******/

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
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 500
#define sz 100005

/******   start your code   *******/

/******* start my code ********/

int arr[sz1];
vector<int>l;
vector<int>r;
int main()
{
    int i,j,k,n;
    sci(n);
    for(i=1; i<=n; i++)
        sci(arr[i]);
    bool key=1;
    for(i=1; i<=n; i++)
    {
        if(arr[i]!=0)
        {
            if(!key && !l.empty())
                r.pb(i-1);
            l.pb(i);
            r.pb(i);
            key=1;
        }
        else
        {
            if(key)
            {
                if(!r.empty())
                    r.pop_back();
            }
            key=0;
        }
    }
    if(!key && !l.empty())
        r.pb(i-1);
    if(l.empty())
        pfs("NO");
    else
    {
        if(l[0]!=1) l[0]=1;
        int x=l.size();
        pfs("YES");
        pfi(x);
        for(i=0;i<x;i++)
            pf("%d %d\n",l[i],r[i]);
    }
        return 0;
}
