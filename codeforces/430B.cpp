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

double dist(double x1, double x2, double y1, double y2)
{
    double dis;
    dis=sqrt((x1 - y1)*(x1 - y1)+(x2 - y2)*(x2 - y2));
    return dis;
}
int main()
{
    //TEST // "test" as variable
    int n,res=0;
    double d,r,x,y,rad;
    sf("%lf %lf",&r,&d);
    sci(n);
    while(n--)
    {
        sf("%lf %lf %lf",&x,&y,&rad);
        if(r>=dist(0,0,x,y) and dist(0,0,x,y)>=(r-d))
        {
            if((dist(0,0,x,y)+rad)<=r and (dist(0,0,x,y)-rad)>=r-d )
                res++;
        }
    }
    pfi(res);
    return 0;
}

/*
input:
8 4
7
7 8 1
-7 3 2
0 2 1
0 -2 2
-3 -3 1
0 6 2
5 3 1

10 8
4
0 0 9
0 0 10
1 0 1
1 0 2

output:

*/





