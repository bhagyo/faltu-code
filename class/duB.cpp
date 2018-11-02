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
#define sz 30005
#define sz1 201

/******   start your code   *******/

int mod,n,m,id;
int modd(int x)
{
    return x%mod;
}
struct mat
{
    int a11,a12,b11,b12;
    mat(){}
    mat(int _a,int _b,int _c,int _d)
    {
        a11=_a;
        a12=_b;
        b11=_c;
        b12=_d;
    }
    mat operator *(const mat &temp) const
    {
        return mat(modd(a11*temp.a11+a12*temp.b11),modd(a11*temp.a12+a12*temp.b12),
                   modd(b11*temp.a11+b12*temp.b11),modd(b11*temp.a12+b12*temp.b12));
    }
    void show()
    {
        pf("%d %d\n",a11,a12);
        pf("%d %d\n",b11,b12);
    }
    void read()
    {
        sci3(a11,a12,b11);sci(b12);
    }
};

struct segment
{
    int lft,rgt;
    mat s;
    mat operator = (const mat &temp) const
    {
        return mat(temp.a11,temp.a12,temp.b11,temp.b12);
    }
    int mid()
    {
        return (lft+rgt)/2;
    }
};
mat arr[sz];
segment seg[sz*4];
void build(int lft,int rgt,int n)
{
    seg[n].lft=lft;
    seg[n].rgt=rgt;
    if(lft==rgt)
    {
        seg[n].s=arr[lft];
        return;
    }
    int mid=seg[n].mid();
    build(lft,mid,n*2);
    build(mid+1,rgt,n*2+1);
    seg[n].s=(seg[n*2].s*seg[n*2+1].s);
}
mat qury(int lft,int rgt,int n)
{
    if(seg[n].lft==lft and seg[n].rgt==rgt) return seg[n].s;

    int mid=seg[n].mid();

    if(rgt<=mid) return qury(lft,rgt,n*2);

    if(lft>mid) return qury(lft,rgt,n*2+1);

    else return qury(lft,mid,n*2)* qury(mid+1,rgt,n*2+1);
}
int main()
{
    freopen("crypto.in","r",stdin);
    freopen("crypto.out","w",stdout);

    int i,j,k,l,m,lft,rgt;
    mat ekhn;
    bool key=false;
    while(sci3(mod,n,m)!=EOF)
    {
        //key=false;
        for(i=1;i<=n;i++) arr[i].read();
        build(1,n,1);
        while(m--)
        {
            if(key) nn;
            else key=true;
            sci2(lft,rgt);
            ekhn=qury(lft,rgt,1);
            ekhn.show();
        }
    }
    return 0;
}

/*
3 4 4
0 1
0 0

2 1
1 2

0 0
0 2

1 0
0 2

1 4
2 3
1 3
2 2



1 1 10
1 2
2 1

Outp
*/
