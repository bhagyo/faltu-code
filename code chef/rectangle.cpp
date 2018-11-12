/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি রাগ, নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef double lf;
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

bool isRectangle(lf x1, lf y1,lf x2, lf y2,lf x3, lf y3,lf x4, lf y4)
{
    lf cx,cy;
    lf dd1,dd2,dd3,dd4;

    cx=(x1+x2+x3+x4)/4.000;
    cy=(y1+y2+y3+y4)/4.000;

    dd1=sqrt(cx-x1)+sqrt(cy-y1);
    dd2=sqrt(cx-x2)+sqrt(cy-y2);
    dd3=sqrt(cx-x3)+sqrt(cy-y3);
    dd4=sqrt(cx-x4)+sqrt(cy-y4);
    return dd1==dd2 && dd1==dd3 && dd1==dd4;
}
int main()
{
    TEST
    {
        lf a,b,c,d;
    }

    return 0;
}
/*
input:
7
4 1 2 3 9 8 7

output:

*/

