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
#define sz 100001
#define sz1 10

/******   start your code   *******/

lld arr[sz];
lld tree[3*sz];
void init(lld node, lld b, lld e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    lld Left = node * 2;
    lld Right = node * 2 + 1;
    lld mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
lld query(lld node, lld b, lld e, lld i, lld j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    lld Left = node * 2;
    lld Right = node * 2 + 1;
    lld mid = (b + e) / 2;
    lld p1 = query(Left, b, mid, i, j);
    lld p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(lld node, lld b, lld e, lld i, lld newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        tree[node] += newvalue;
        return;
    }
    lld Left = node * 2;
    lld Right = node * 2 + 1;
    lld mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
    lld i,n,l,r,q;
    int typ;
    TEST
    {
        sf("%lld%lld",&n,&q);
        for(i=0;i<n;i++) sf("%lld",&arr[i]);
        pf("Case %d:\n",test);
        init(1,0,n-1);
        while(q--)
        {
            sci(typ);
            if(typ==1)
            {
                sf("%lld",&l);
                r=query(1,0,n-1,l,l);
                pf("%lld\n",r);
                update(1,0,n-1,l,-r);
            }
            else if(typ==2)
            {
                sf("%lld%lld",&l,&r);
                update(1,0,n-1,l,r);
            }
            else
            {
                sf("%lld%lld",&l,&r);
                pf("%lld\n",query(1,0,n-1,l,r));
            }
        }
    }
    return 0;
}

/*
input:
1
5 6
3 2 1 4 5
1 4
2 3 4
3 0 3
1 2
3 0 4
1 1


1
5 20
3 2 1 4 5
1 4
3 4 4
output:

*/
