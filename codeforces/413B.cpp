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
#define sz 200005
#define sz1 4

/******   start your code   *******/

class shrt
{
public:
    int pr,fn,bk;
    shrt()
    {
        pr=fn=bk;
    }
};
shrt arr[sz];
bool cmp(shrt a,shrt b)
{
    return a.pr<b.pr;
}

int type[sz1];
bool vis[sz];
int main()
{
    int i,j,k,m,n,val;
    bool paici;
    sci(n);
    for(i=0; i<n; i++) sci(arr[i].pr);
    for(i=0; i<n; i++) sci(arr[i].fn);
    for(i=0; i<n; i++) sci(arr[i].bk);

    sort(arr,arr+n,cmp);

    /*for(i=0;i<n;i++)
    {
        pfi3(arr[i].pr,arr[i].fn,arr[i].bk);
    }*/

    sci(m);
    while(m--)
    {
        sci(val);
        //pfi(type[val]);
        paici=false;
        for(i=type[val]; i<n; i++)
            if(!vis[i] and (arr[i].fn==val or arr[i].bk==val))
            {
                //chk1;
                pf("%d ",arr[i].pr);
                type[val]=i+1;
                vis[i]=true;
                paici=true;
                break;
            }
        if(!paici)
        {
            //chk2;
            pfi(-1);
            type[val]=n;
        }
    }
    return 0;
}

/*
input:

output:

*/
