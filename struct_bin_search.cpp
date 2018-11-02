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
#define pii pair<int,int>
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
#define sz 10005
#define sz1 201

/******   start your code   *******/


struct data
{
    int aa,bb;
    data(){}
    data(int _aa,int _bb)
    {
        aa=_aa;
        bb=_bb;
    }
    bool operator()(const data& now,int val) const
    {
        return now.aa<val;
    }
    bool operator()(int val,const data& now) const
    {
        return val<now.aa;
    }
};
bool cmp(data x,data y) // sort korar jonno function ta likhlam
                        // jeno ascending order e sort hoy
{
    if(x.aa==y.aa) return x.bb<y.bb;
    return x.aa<y.aa;


vector<data> arr;
int main()
{
    int i,j,k,n;
    sci(n);
    for(i=0;i<n;i++)
    {
        sci2(j,k);
        arr.pb(data(j,k));
    }
    sort(arr.begin(),arr.end(),cmp);
    sci(k);// amra je type er data khujte chacci
    int x=upper_bound(arr.begin(),arr.end(),k,data())-arr.begin();
    pfi(x); //answer
    return 0;
}

/*
7
3 1
4 1
2 3
2 1
1 5
1 3
2 5
Outp
*/
