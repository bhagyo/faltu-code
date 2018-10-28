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
#define eps 1e-8
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
#define sz 105
#define sz1 201

/******   start your code   *******/
struct point
{
    double xx,yy;
};
point arr[sz];
bool collinear(point a,point b,point c)
{
    double store=a.xx*(b.yy-c.yy);
    store+=(b.xx*(c.yy-a.yy));
    store+=(c.xx*(a.yy-b.yy));

    if(store<eps)
        return true;
    return false;
}
double dis(point a,point b)
{
    double x=a.xx-b.xx;
    double y=a.yy-b.yy;

    return (x*x)+(y*y);
}
bool cmp(double x,double y)
{
    if(abs(x-y)<=eps) return true;
    return false;
}
point center(point p,point q,point r)
{
    point c;
    double ax=q.xx-p.xx;
    double ay=q.yy-p.yy;
    double bx=r.xx-p.xx;
    double by=r.yy-p.yy;
    double d=ax*by-bx*ay;

    double cx=(q.xx+p.xx)/2.0;
    double cy=(q.yy+p.yy)/2.0;
    double dx=(r.xx+p.xx)/2.0;
    double dy=(r.yy+p.yy)/2.0;

    double t1=bx*dx+by*dy;
    double t2=ax*cx+ay*cy;

    double x=(by*t2-ay*t1)/d;
    double y=(ax*t1-bx*t2)/d;

    c.xx=x,c.yy=y;
    return c;
}
bool possi(point p,point q,point r)
{
    point c;
    double ax=q.xx-p.xx;
    double ay=q.yy-p.yy;
    double bx=r.xx-p.xx;
    double by=r.yy-p.yy;
    double d=ax*by-bx*ay;
    if(cmp(d,0.0)) return true;
    return false;
}
/*
point center(point A,point B,point C)
{

    double yDelta_a=B.yy-A.yy;
    double xDelta_a=B.xx-A.xx;
    double yDelta_b=C.yy-B.yy;
    double xDelta_b=C.xx-B.xx;
    point center;
    double aSlope = yDelta_a/xDelta_a;
    double bSlope = yDelta_b/xDelta_b;
    center.xx= (aSlope*bSlope*(A.yy-C.yy)+bSlope*(A.xx+B.xx)-aSlope*(B.xx+C.xx))/(2.0*(bSlope-aSlope));
    center.yy= -1*(center.xx-(A.xx+B.xx)/2.0)/aSlope+(A.yy+B.yy)/2.0;

    return center;
}*/
int main()
{
    int i,j,k,l,n,res,now;
    double rad;
    point cen;
    while(sci(n)!=EOF and n!=0)
    {
        for(i=0; i<n; i++)
            sf("%lf %lf",&arr[i].xx,&arr[i].yy);
        if(n<=2)
        {
            if(n==1) pfi(1);
            else     pfi(2);
        }
        else
        {
            res=2;
            for(i=0; i<n; i++)
                for(j=i+1; j<n; j++)
                    for(k=j+1; k<n; k++)
                    {
                        now=0;

                        if(collinear(arr[i],arr[j],arr[k])) continue; //ek line e ace kina

                        if(possi(arr[i],arr[j],arr[k])) continue;

                        cen=center(arr[i],arr[j],arr[k]);  //center khuje paici

                        rad=dis(cen,arr[i]);  //circle er radious ber korlam

                        for(l=0; l<n; l++)
                            if(cmp(rad,(dis(cen,arr[l])))) //center theke point er distance dekhlam
                                now++;

                        pf("%d %d %d now = %d\n",i,j,k,now);
                        res=max(res,now);
                    }
            pf("res = %d\n",res);
        }
    }
    return 0;
}

/*
7
-10 0
0 -10
10 0
0 10
-20 10
-10 20
-2 4
4
-10000 10000
10000 10000
10000 -10000
-10000 -9999
3
-1 0
0 0
1 0
0
Outp
*/
